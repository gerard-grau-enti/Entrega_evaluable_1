// ej_5_21.cpp
// Ejercicio 5.21: simulación de lanzamientos de una moneda.
// Se lanza 100 veces, se muestra Heads o Tails en cada lanzamiento
// y se cuenta cuántas veces sale cada cara.
#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time
using namespace std;

// Prototipo
int flip();

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));   // semilla, una sola vez

    int caras{0};   // Heads
    int cruces{0};  // Tails

    for (int lanzamiento{1}; lanzamiento <= 100; ++lanzamiento) {
        if (flip() == 1) {
            cout << "Heads\n";
            ++caras;
        } else {
            cout << "Tails\n";
            ++cruces;
        }
    }

    cout << "\nHeads: " << caras << "\n";
    cout << "Tails: " << cruces << "\n";
}

// No recibe argumentos. Devuelve 0 para cruz (Tails) y 1 para cara (Heads).
// rand() % 2 da 0 o 1 con la misma probabilidad.
int flip() {
    return rand() % 2;
}

/*
Nota: si la simulación es realista, cada cara debe salir aproximadamente
la mitad de las veces (unas 50 de 100), aunque no exactamente 50.
*/
