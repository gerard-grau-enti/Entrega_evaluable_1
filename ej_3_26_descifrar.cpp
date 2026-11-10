// ej_3_26_descifrar.cpp
// Ejercicio 3.26 (parte 2): descifrar un entero cifrado de cuatro dígitos.
// Se invierte el procedimiento de cifrado, y en orden contrario:
//   1) Deshacer el intercambio (1.º con 3.º y 2.º con 4.º).
//      Intercambiar dos veces deja todo como estaba, así que se repite igual.
//   2) Deshacer la suma de 7: en cifrado hicimos (d + 7) % 10,
//      así que ahora hacemos (d + 3) % 10, porque 7 + 3 = 10 y
//      sumar 10 no cambia el resto al dividir entre 10.
#include <iostream>
using namespace std;

int main() {
    int cifrado{0};

    cout << "Introduce el entero cifrado de cuatro digitos (0000-9999): ";
    cin >> cifrado;

    while (cifrado < 0 || cifrado > 9999) {
        cout << "Debe tener cuatro digitos. Introduce otro: ";
        cin >> cifrado;
    }

    int d1{cifrado / 1000};
    int d2{cifrado / 100 % 10};
    int d3{cifrado / 10 % 10};
    int d4{cifrado % 10};

    // Paso 1: deshacer el intercambio
    int temporal{d1};
    d1 = d3;
    d3 = temporal;

    temporal = d2;
    d2 = d4;
    d4 = temporal;

    // Paso 2: deshacer la suma de 7
    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;

    cout << "Numero original: " << d1 << d2 << d3 << d4 << "\n";
}

/*
Ejemplo de comprobación:
  Original 1234 -> cifrar: (+7) 8 9 0 1 -> intercambio -> 0 1 8 9 -> 0189
  Cifrado 0189  -> descifrar: intercambio -> 8 9 0 1 -> (+3) 1 2 3 4 -> 1234
*/
