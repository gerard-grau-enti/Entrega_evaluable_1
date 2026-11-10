// ej_4_8.cpp
// Ejercicio 4.8: calcular el producto de los enteros impares del 1 al 15.
//   1 * 3 * 5 * 7 * 9 * 11 * 13 * 15
#include <iostream>
using namespace std;

int main() {
    int producto{1};   // empieza en 1 (elemento neutro de la multiplicación)

    // i toma los valores impares: 1, 3, 5, ..., 15 (sumamos 2 cada vez)
    for (int i{1}; i <= 15; i += 2) {
        producto *= i;
    }

    cout << "Producto de los impares del 1 al 15: " << producto << "\n";
}

/*
Resultado: 2027025 (cabe en un int, cuyo máximo es 2 147 483 647).
*/
