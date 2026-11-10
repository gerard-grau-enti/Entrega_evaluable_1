// ej_3_25b.cpp
// Ejercicio 3.25 b): estimar la constante e con la serie
//   e = 1 + 1/1! + 1/2! + 1/3! + ...
// El usuario indica la precisión: el número de términos de la suma.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int terminos{0};

    cout << "Numero de terminos de la suma: ";
    cin >> terminos;

    while (terminos < 1) {
        cout << "Debe ser al menos 1. Introduce otro: ";
        cin >> terminos;
    }

    double e{1.0};          // primer término de la serie (el 1)
    double factorial{1.0};  // aquí iremos guardando i!
    int i{1};

    // Sumamos 1/1! + 1/2! + ... + 1/terminos!
    // Usamos double para el factorial: evita desbordar un int y
    // además la división 1.0 / factorial da decimales.
    while (i <= terminos) {
        factorial *= i;        // i! = (i-1)! * i
        e += 1.0 / factorial;
        ++i;
    }

    cout << fixed << setprecision(15);
    cout << "e aproximado con " << terminos << " terminos: " << e << "\n";
}
