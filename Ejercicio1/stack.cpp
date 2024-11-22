#include <iostream>
#include "stack.h"

Stack::Stack() {
    top = -1;
}

bool Stack::isEmpty() {
    return (top == -1);
}

bool Stack::isFull() {
    return (top == MAX_SIZE - 1);
}

void Stack::push(int value) {
    if (isFull()) {
        std::cout << "Stack overflow" << std::endl;
    } else {
        data[++top] = value;
    }
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack underflow" << std::endl;
        return -1; // Valor de error
    } else {
        return data[top--];
    }
}

void Stack::display() {
    if (isEmpty()) {
        std::cout << "La pila está vacía." << std::endl;
    } else {
        std::cout << "Contenido de la pila: ";
        for (int i = top; i >= 0; i--) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
}