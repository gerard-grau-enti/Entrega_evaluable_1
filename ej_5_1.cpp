// ej_5_1.cpp
// Ejercicio 5.1: valor de x después de cada instrucción.
// fabs(x)  -> valor absoluto
// floor(x) -> redondea hacia abajo (al entero menor o igual que x)
// ceil(x)  -> redondea hacia arriba (al entero mayor o igual que x)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x{0.0};

    x = fabs(7.5);
    cout << "a) x = fabs(7.5)   = " << x << "\n";   // 7.5

    x = floor(7.5);
    cout << "b) x = floor(7.5)  = " << x << "\n";   // 7

    x = fabs(0.0);
    cout << "c) x = fabs(0.0)   = " << x << "\n";   // 0

    x = ceil(0.0);
    cout << "d) x = ceil(0.0)   = " << x << "\n";   // 0

    x = fabs(-6.4);
    cout << "e) x = fabs(-6.4)  = " << x << "\n";   // 6.4

    x = ceil(-6.4);
    cout << "f) x = ceil(-6.4)  = " << x << "\n";   // -6

    x = ceil(-fabs(-8 + floor(-5.5)));
    cout << "g) x = ceil(-fabs(-8 + floor(-5.5))) = " << x << "\n";   // -14
}

/*
RESPUESTAS (razonadas a mano):

a) fabs(7.5)  = 7.5
b) floor(7.5) = 7          (hacia abajo)
c) fabs(0.0)  = 0
d) ceil(0.0)  = 0
e) fabs(-6.4) = 6.4
f) ceil(-6.4) = -6         (hacia arriba: -6 es mayor que -6.4)
g) Se evalúa de dentro hacia fuera:
     floor(-5.5)            = -6       (hacia abajo: -6 es menor que -5.5)
     -8 + (-6)              = -14
     fabs(-14)              = 14
     -fabs(...)  = -(14)    = -14
     ceil(-14)              = -14
   x = -14
*/
