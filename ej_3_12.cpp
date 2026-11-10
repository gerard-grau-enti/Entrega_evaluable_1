// ej_3_12.cpp
// Ejercicio 3.12: ¿Qué muestra en pantalla el siguiente programa?
#include <iostream>
using namespace std;

int main() {
    int row{10};

    while (row >= 1) {
        int column{1};

        // Bucle interior: escribe 10 símbolos en la misma línea.
        // Si row es impar escribe '<', si es par escribe '>'.
        while (column <= 10) {
            cout << (row % 2 == 1 ? "<" : ">");
            ++column;
        }

        --row;          // pasamos a la fila anterior
        cout << "\n";   // salto de línea al terminar cada fila
    }
}

/*
RESPUESTA (razonada a mano, sin ejecutar):

El bucle exterior va de row = 10 hasta row = 1 (10 vueltas).
En cada vuelta, el bucle interior se repite 10 veces (column = 1..10),
así que cada línea tiene 10 símbolos iguales.
El símbolo depende de row: impar -> '<', par -> '>'.

  row | row % 2 | Línea
  ----+---------+-----------
  10  |    0    | >>>>>>>>>>
   9  |    1    | <<<<<<<<<<
   8  |    0    | >>>>>>>>>>
   7  |    1    | <<<<<<<<<<
   6  |    0    | >>>>>>>>>>
   5  |    1    | <<<<<<<<<<
   4  |    0    | >>>>>>>>>>
   3  |    1    | <<<<<<<<<<
   2  |    0    | >>>>>>>>>>
   1  |    1    | <<<<<<<<<<

Salida en pantalla: 10 líneas de 10 símbolos, alternando
'>' y '<' empezando por '>'.
*/
