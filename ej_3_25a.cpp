// ej_3_25a.cpp
// Ejercicio 3.25 a): leer un entero no negativo y mostrar su factorial.
// n! = n * (n-1) * ... * 1   y   0! = 1! = 1
// Los factoriales crecen muy rápido: con int solo llegamos hasta 12!
// y con long long hasta 20!. Por eso usamos cpp_int de Boost Multiprecision,
// que puede guardar enteros de tamaño casi ilimitado.
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;

int main() {
    int n{0};

    cout << "Introduce un entero no negativo: ";
    cin >> n;

    // Validación: el factorial solo está definido para n >= 0
    while (n < 0) {
        cout << "Debe ser no negativo. Introduce otro: ";
        cin >> n;
    }

    cpp_int factorial{1};   // 0! = 1 y 1! = 1 se cumplen sin entrar al bucle
    int i{n};

    // Multiplicamos n * (n-1) * ... * 2 con un while
    while (i > 1) {
        factorial *= i;
        --i;
    }

    cout << n << "! = " << factorial << "\n";
}
