# Tarea: Estructuras de Datos - Pilas, Colas y Templates en C++

Este repositorio contiene tres programas desarrollados en C++ que abordan distintas problemáticas relacionadas con estructuras de datos. Cada programa se encuentra organizado en carpetas separadas: `Ejercicio1`, `Ejercicio2`, y `Ejercicio3`.

---

## Contenido del Repositorio

### 1. [Ejercicio1](./Ejercicio1)
**Descripción**: Programa que invierte el orden de una pila.  
- **Funcionalidad**: 
  - Dada una pila de elementos, el programa invierte el orden de los mismos utilizando únicamente la misma pila como contenedor.
- **Puntos clave**: 
  - Implementación de operaciones estándar de pila (`push`, `pop` y `top`).
  - Gestión eficiente de la memoria.

---

### 2. [Ejercicio2](./Ejercicio2)
**Descripción**: Procesamiento de datos en una cola normal siguiendo un orden de prioridad.  
- **Funcionalidad**: 
  - Dada una cola con elementos etiquetados por prioridad (`A`, `B`, `C`, `D`), el programa procesa primero los elementos de mayor prioridad (`A`), seguido por los de prioridad `B`, luego `C` y finalmente `D`.
  - Ejemplo de entrada:
    ```
    inicio -> (B, "Daniel") - (C, "Pablo") - (D, "Coraline") - (A, "Alfonzo") - (C, "Lara") - (A, "Paula") - (A, "Chancho") - (A, "Luz") <- fin
    ```
  - Ejemplo de salida:
    ```
    Procesando: Alfonzo, Paula, Chancho, Luz, Daniel, Pablo, Lara, Coraline.
    ```
- **Puntos clave**:
  - Uso de operaciones estándar de colas (`enqueue`, `dequeue`).
  - Implementación de un esquema de procesamiento por prioridad sin utilizar estructuras avanzadas como colas de prioridad.

---

### 3. [Ejercicio3](./Ejercicio3)
**Descripción**: Implementación de un template para una cola de prioridad basada en listas enlazadas simples.  
- **Funcionalidad**:
  - El programa implementa una cola de prioridad genérica utilizando una lista enlazada simple.
  - Admite la inserción y eliminación de elementos, manteniendo el orden según la prioridad asignada.
- **Puntos clave**:
  - Uso de `templates` en C++ para la implementación genérica.
  - Gestión dinámica de memoria mediante listas enlazadas simples.
  - Métodos para insertar elementos con su prioridad, acceder al elemento de mayor prioridad, y eliminarlos de la cola.

---
