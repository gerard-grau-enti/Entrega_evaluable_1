// ej_5_6.cpp
// Ejercicio 5.6: instrucciones que asignan a n un entero aleatorio
// dentro de cada intervalo.
//
// Fórmula general para un intervalo [minimo, maximo]:
//     n = minimo + rand() % (maximo - minimo + 1);
// rand() % k da un valor entre 0 y k-1, y luego desplazamos
// el intervalo sumando "minimo".
#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));   // semilla, una sola vez

    int n{0};

    n = 1 + rand() % 2;        // a)  1 <= n <= 2     (2 valores)
    cout << "a) 1 <= n <= 2:       " << n << "\n";

    n = 1 + rand() % 100;      // b)  1 <= n <= 100   (100 valores)
    cout << "b) 1 <= n <= 100:     " << n << "\n";

    n = rand() % 10;           // c)  0 <= n <= 9     (10 valores)
    cout << "c) 0 <= n <= 9:       " << n << "\n";

    n = 1000 + rand() % 113;   // d)  1000 <= n <= 1112  (1112 - 1000 + 1 = 113 valores)
    cout << "d) 1000 <= n <= 1112: " << n << "\n";

    n = -1 + rand() % 3;       // e)  -1 <= n <= 1    (3 valores)
    cout << "e) -1 <= n <= 1:      " << n << "\n";

    n = -3 + rand() % 15;      // f)  -3 <= n <= 11   (11 - (-3) + 1 = 15 valores)
    cout << "f) -3 <= n <= 11:     " << n << "\n";
}
