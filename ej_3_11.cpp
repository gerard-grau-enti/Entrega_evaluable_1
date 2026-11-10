// ej_3_11.cpp
// Ejercicio 3.11: ¿Qué muestra en pantalla el siguiente programa?
#include <iostream>
using namespace std;

int main() {
    int count{1};

    while (count <= 10) {
        // Operador ternario: si count es impar (resto 1) muestra "****",
        // si es par muestra "++++++++".
        cout << (count % 2 == 1 ? "****" : "++++++++") << "\n";
        ++count;
    }
}

/*
RESPUESTA (razonada a mano, sin ejecutar):

El bucle while se ejecuta 10 veces (count = 1, 2, ..., 10).
En cada vuelta se muestra una línea según si count es impar o par:

  count | count % 2 | Se muestra
  ------+-----------+-----------
    1   |     1     | ****
    2   |     0     | ++++++++
    3   |     1     | ****
    4   |     0     | ++++++++
    5   |     1     | ****
    6   |     0     | ++++++++
    7   |     1     | ****
    8   |     0     | ++++++++
    9   |     1     | ****
   10   |     0     | ++++++++

Salida en pantalla (10 líneas alternando):
****
++++++++
****
++++++++
****
++++++++
****
++++++++
****
++++++++
*/
