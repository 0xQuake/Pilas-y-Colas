#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>

struct Node {
    char priority;
    std::string name;
    Node* next;
};

class Queue {
public:
    Queue();
    ~Queue();
    void enqueue(char priority, const std::string& name);
    void dequeue();
    bool isEmpty() const;
    void processByPriority(char priorityLevel);

private:
    Node* front;
    Node* rear;
};

#endif // QUEUE_H
