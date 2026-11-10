// ej_3_25c.cpp
// Ejercicio 3.25 c): calcular e^x con la serie
//   e^x = 1 + x/1! + x^2/2! + x^3/3! + ...
// El usuario indica x y el número de términos de la suma.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x{0.0};
    int terminos{0};

    cout << "Valor de x: ";
    cin >> x;
    cout << "Numero de terminos de la suma: ";
    cin >> terminos;

    while (terminos < 1) {
        cout << "Debe ser al menos 1. Introduce otro: ";
        cin >> terminos;
    }

    double resultado{1.0};   // primer término (el 1)
    double potencia{1.0};    // aquí guardamos x^i
    double factorial{1.0};   // aquí guardamos i!
    int i{1};

    while (i <= terminos) {
        potencia *= x;       // x^i = x^(i-1) * x
        factorial *= i;      // i!  = (i-1)! * i
        resultado += potencia / factorial;
        ++i;
    }

    cout << fixed << setprecision(10);
    cout << "e^" << x << " aproximado con " << terminos
         << " terminos: " << resultado << "\n";
}
