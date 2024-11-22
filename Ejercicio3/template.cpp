#include <iostream>


template <typename T>
class Node {
public:
    T data;
    int priority;
    Node* next;
    Node(T d, int p) : data(d), priority(p), next(nullptr) {}
};

template <typename T>
class PriorityQueue {
private:
    Node<T>* front;
public:
    PriorityQueue() : front(nullptr) {}

    void enqueue(T data, int priority) {
        Node<T>* temp = new Node<T>(data, priority);
        if (front == nullptr || priority < front->priority) {
            temp->next = front;
            front = temp;
        } else {
            Node<T>* ptr = front;
            while (ptr->next != nullptr && ptr->next->priority <= priority) {
                ptr = ptr->next;
            }
            temp->next = ptr->next;
            ptr->next = temp;
        }
    }

    void dequeue() {
        if (front == nullptr) {
            std::cout << "Queue Underflow\n";
            return;
        }
        Node<T>* temp = front;
        front = front->next;
        delete temp;
    }

    T peek() {
        if (front == nullptr) {
            throw std::runtime_error("Queue is empty");
        }
        return front->data;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    ~PriorityQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    PriorityQueue<int> pq;
    pq.enqueue(10, 2);
    pq.enqueue(20, 1);
    pq.enqueue(30, 3);

    while (!pq.isEmpty()) {
        std::cout << pq.peek() << std::endl;
        pq.dequeue();
    }

    return 0;
}
