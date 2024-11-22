#include "queue.h"

int main() {
    Queue cola;

    // Encolamos los elementos en la cola
    cola.enqueue('B', "Daniel");
    cola.enqueue('C', "Pablo");
    cola.enqueue('D', "Coraline");
    cola.enqueue('A', "Alfonzo");
    cola.enqueue('C', "Lara");
    cola.enqueue('A', "Paula");
    cola.enqueue('A', "Chancho");
    cola.enqueue('A', "Luz");

    // Procesamos las prioridades en el orden A, B, C, D
    std::cout << "Procesando prioridad A:" << std::endl;
    cola.processByPriority('A');

    std::cout << "\nProcesando prioridad B:" << std::endl;
    cola.processByPriority('B');

    std::cout << "\nProcesando prioridad C:" << std::endl;
    cola.processByPriority('C');

    std::cout << "\nProcesando prioridad D:" << std::endl;
    cola.processByPriority('D');

    return 0;
}