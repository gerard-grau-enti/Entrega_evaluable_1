// ej_3_26_cifrar.cpp
// Ejercicio 3.26 (parte 1): cifrar un entero de cuatro dígitos.
// Esquema de cifrado:
//   1) Sustituir cada dígito por (dígito + 7) % 10
//   2) Intercambiar el 1.º dígito con el 3.º y el 2.º con el 4.º
//   3) Mostrar el entero cifrado
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero{0};

    cout << "Introduce un entero de cuatro digitos (0000-9999): ";
    cin >> numero;

    while (numero < 0 || numero > 9999) {
        cout << "Debe tener cuatro digitos. Introduce otro: ";
        cin >> numero;
    }

    // Extraemos los cuatro dígitos con división entera y resto
    int d1{numero / 1000};         // millares
    int d2{numero / 100 % 10};     // centenas
    int d3{numero / 10 % 10};      // decenas
    int d4{numero % 10};           // unidades

    // Paso 1: sumar 7 a cada dígito y quedarnos con el resto de dividir entre 10
    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    // Paso 2: intercambiar 1.º con 3.º y 2.º con 4.º
    int temporal{d1};
    d1 = d3;
    d3 = temporal;

    temporal = d2;
    d2 = d4;
    d4 = temporal;

    // Paso 3: mostrar el número cifrado (con ceros a la izquierda si hace falta)
    cout << "Numero cifrado: " << d1 << d2 << d3 << d4 << "\n";
}
