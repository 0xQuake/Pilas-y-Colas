#include <iostream>
#include "stack.h"

void insertAtBottom(Stack &stack, int value) {
    if (stack.isEmpty()) {
        stack.push(value);
    } else {
        int temp = stack.pop();
        insertAtBottom(stack, value);
        stack.push(temp);
    }
}

void invertStack(Stack &stack) {
    if (!stack.isEmpty()) {
        int temp = stack.pop();
        invertStack(stack);
        insertAtBottom(stack, temp);
    }
}

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    std::cout << "Pila original:" << std::endl;
    stack.display();

    invertStack(stack);

    std::cout << "Pila invertida:" << std::endl;
    stack.display();

    return 0;
}