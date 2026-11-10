// ej_4_6.cpp
// Ejercicio 4.6: ¿Qué hace el siguiente programa?
#include <iostream>
using namespace std;

int main() {
    for (int i{1}; i <= 10; i++) {
        for (int j{1}; j <= 5; j++) {
            cout << '@';
        }

        cout << '\n';
    }
}

/*
RESPUESTA:

Son dos bucles for anidados:
  - El bucle exterior (i) se ejecuta 10 veces: i = 1, 2, ..., 10.
  - El bucle interior (j) se ejecuta 5 veces por cada vuelta del exterior
    y escribe un '@' cada vez, todos en la misma línea.
  - Al terminar el bucle interior, cout << '\n' salta a la línea siguiente.

El programa dibuja un rectángulo de 10 filas por 5 columnas de '@'.
En total escribe 10 * 5 = 50 caracteres '@'.

Salida:
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
*/
