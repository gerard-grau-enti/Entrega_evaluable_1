// ej_5_26.cpp
// Ejercicio 5.26: Torres de Hanói con una función recursiva.
// Hay tres varillas (1, 2 y 3). Hay que mover n discos de la varilla
// de origen a la de destino, moviendo un solo disco cada vez y sin
// colocar nunca un disco mayor sobre uno menor.
//
// Mover n discos de "origen" a "destino" usando "auxiliar":
//   a) Mover n-1 discos de origen a auxiliar   (usando destino de apoyo)
//   b) Mover el disco mayor de origen a destino
//   c) Mover n-1 discos de auxiliar a destino  (usando origen de apoyo)
// Caso base: con n = 1 se mueve el disco directamente.
#include <iostream>
using namespace std;

// Prototipo. Parámetros:
//   discos   -> número de discos que se van a mover
//   origen   -> varilla en la que están inicialmente
//   destino  -> varilla a la que hay que trasladarlos
//   auxiliar -> varilla que se usa como soporte temporal
void hanoi(int discos, int origen, int destino, int auxiliar);

int main() {
    int discos{0};

    cout << "Numero de discos: ";
    cin >> discos;

    while (discos < 1) {
        cout << "Debe haber al menos 1 disco. Introduce otro: ";
        cin >> discos;
    }

    cout << "\nMovimientos para pasar " << discos
         << " discos de la varilla 1 a la 3:\n";
    hanoi(discos, 1, 3, 2);
}

void hanoi(int discos, int origen, int destino, int auxiliar) {
    // Caso base: un solo disco, se mueve directamente
    if (discos == 1) {
        cout << origen << " -> " << destino << "\n";
        return;
    }

    // a) n-1 discos de origen a auxiliar (el destino hace de soporte)
    hanoi(discos - 1, origen, auxiliar, destino);

    // b) el disco mayor de origen a destino
    cout << origen << " -> " << destino << "\n";

    // c) n-1 discos de auxiliar a destino (el origen hace de soporte)
    hanoi(discos - 1, auxiliar, destino, origen);
}

/*
Con 3 discos muestra los 7 movimientos (2^3 - 1) del enunciado:
1 -> 3
1 -> 2
3 -> 2
1 -> 3
2 -> 1
2 -> 3
1 -> 3
*/
