// ej_5_18.cpp
// Ejercicio 5.18: función que recibe un entero y devuelve el número
// con sus cifras en orden inverso. Ejemplo: 7631 -> 1367.
#include <iostream>
using namespace std;

// Prototipo
int reverseDigits(int numero);

int main() {
    int numero{0};

    cout << "Introduce un entero: ";
    cin >> numero;

    cout << "Con las cifras invertidas: " << reverseDigits(numero) << "\n";
}

// Idea: sacamos la última cifra con % 10 y la colocamos al final
// del resultado (multiplicando antes el resultado por 10).
// Ejemplo con 7631:
//   numero = 7631 -> ultima = 1 -> resultado = 0*10 + 1 = 1    -> numero = 763
//   numero = 763  -> ultima = 3 -> resultado = 1*10 + 3 = 13   -> numero = 76
//   numero = 76   -> ultima = 6 -> resultado = 13*10 + 6 = 136 -> numero = 7
//   numero = 7    -> ultima = 7 -> resultado = 136*10 + 7 = 1367 -> numero = 0
int reverseDigits(int numero) {
    int resultado{0};
    bool negativo{numero < 0};

    if (negativo) {
        numero = -numero;     // trabajamos con el valor positivo
    }

    while (numero > 0) {
        int ultima{numero % 10};
        resultado = resultado * 10 + ultima;
        numero /= 10;
    }

    if (negativo) {
        resultado = -resultado;
    }

    return resultado;
}

// Nota: los ceros finales se pierden al invertir, porque un entero no
// guarda ceros a la izquierda (por ejemplo, 1200 -> 21).
