#include "queue.h"

Queue::Queue() : front(nullptr), rear(nullptr) {}

Queue::~Queue() {
    while (!isEmpty())
        dequeue();
}

void Queue::enqueue(char priority, const std::string& name) {
    Node* newNode = new Node{priority, name, nullptr};
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue::dequeue() {
    if (isEmpty())
        return;
    Node* temp = front;
    front = front->next;
    delete temp;
    if (front == nullptr)
        rear = nullptr;
}

bool Queue::isEmpty() const {
    return front == nullptr;
}

void Queue::processByPriority(char priorityLevel) {
    Node* current = front;
    while (current != nullptr) {
        if (current->priority == priorityLevel) {
            std::cout << "(" << current->priority << ", \"" << current->name << "\")" << std::endl;
        }
        current = current->next;
    }
}