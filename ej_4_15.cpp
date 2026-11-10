// ej_4_15.cpp
// Ejercicio 4.15: calcular pi con la serie infinita
//   pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
// Se muestra una tabla con las aproximaciones de los primeros 200 000
// términos y se averigua cuántos términos hacen falta para obtener por
// primera vez un valor que empiece por 3.14159.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int TERMINOS{200000};

    double pi{0.0};
    double signo{1.0};        // alterna +1, -1, +1, -1, ...
    int primerTermino{0};     // 0 significa "todavía no encontrado"

    cout << "Accuracy set at: " << TERMINOS << "\n\n";
    cout << "term\tpi\n";
    cout << fixed << setprecision(8);

    for (int term{1}; term <= TERMINOS; ++term) {
        // El término número "term" es 4 / (2*term - 1): 4/1, 4/3, 4/5, ...
        pi += signo * 4.0 / (2 * term - 1);
        signo = -signo;

        cout << term << "\t" << pi << "\n";

        // "Empieza por 3.14159" significa que el valor está en [3.14159, 3.14160)
        if (primerTermino == 0 && pi >= 3.14159 && pi < 3.14160) {
            primerTermino = term;
        }
    }

    cout << "\n";
    if (primerTermino != 0) {
        cout << "Primer valor que empieza por 3.14159: termino " << primerTermino << "\n";
    } else {
        cout << "No se obtuvo 3.14159 en " << TERMINOS << " terminos.\n";
    }
}

/*
RESPUESTA: ¿cuántos términos hacen falta hasta obtener por primera vez
un valor que empiece por 3.14159?

  Hacen falta 136121 términos (el programa lo calcula y lo muestra
  en la última línea de la salida).

Observación: la serie converge muy despacio. Con 200 000 términos
el valor es 3.14158765, todavía lejos de la precisión de pi.
*/
