#ifndef STACK_H
#define STACK_H

const int MAX_SIZE = 100;

class Stack {
private:
    int data[MAX_SIZE];
    int top;
public:
    Stack();
    bool isEmpty();
    bool isFull();
    void push(int value);
    int pop();
    void display();
};

#endif
