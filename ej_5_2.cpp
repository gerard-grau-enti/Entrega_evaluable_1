// ej_5_2.cpp
// Ejercicio 5.2: tarifas de aparcamiento.
//   - Tarifa mínima: 20,00 $ por estacionar hasta 3 horas.
//   - Después de las 3 horas: 5,00 $ por cada hora o fracción de hora.
//   - Máximo por 24 horas: 50,00 $.
// Se piden las horas de tres clientes y se muestra una tabla con el
// importe de cada uno y el total de la recaudación.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Prototipos
double calculateCharges(double horas);
double pedirHoras(int coche);
void mostrarFila(int coche, double horas, double importe);

int main() {
    // Pedimos primero las horas de los tres clientes
    double horas1{pedirHoras(1)};
    double horas2{pedirHoras(2)};
    double horas3{pedirHoras(3)};

    // Calculamos el importe de cada cliente con la función
    double importe1{calculateCharges(horas1)};
    double importe2{calculateCharges(horas2)};
    double importe3{calculateCharges(horas3)};

    // Tabla de resultados
    cout << fixed << setprecision(1);
    cout << "\n" << left << setw(8) << "Car"
         << right << setw(8) << "Hours" << setw(10) << "Charge" << "\n";

    mostrarFila(1, horas1, importe1);
    mostrarFila(2, horas2, importe2);
    mostrarFila(3, horas3, importe3);

    // Fila de totales
    cout << left << setw(8) << "TOTAL" << right
         << setw(8) << setprecision(1) << horas1 + horas2 + horas3
         << setw(10) << setprecision(2) << importe1 + importe2 + importe3 << "\n";
}

// Devuelve el importe a pagar por estacionar "horas" horas.
double calculateCharges(double horas) {
    double importe{20.0};   // tarifa mínima (hasta 3 horas)

    if (horas > 3.0) {
        // ceil redondea hacia arriba: 3.2 horas -> 1 hora extra, porque
        // cada hora o fracción de hora cuenta como una hora completa.
        importe += 5.0 * ceil(horas - 3.0);
    }

    if (importe > 50.0) {
        importe = 50.0;     // máximo por 24 horas
    }

    return importe;
}

// Pide las horas de un cliente y repite la pregunta si no son válidas.
// Ningún vehículo permanece más de 24 horas seguidas.
double pedirHoras(int coche) {
    double horas{0.0};

    cout << "Horas del cliente " << coche << ": ";
    cin >> horas;

    while (horas <= 0.0 || horas > 24.0) {
        cout << "Las horas deben estar entre 0 y 24. Introduce otra vez: ";
        cin >> horas;
    }

    return horas;
}

// Muestra una fila de la tabla.
void mostrarFila(int coche, double horas, double importe) {
    cout << left << setw(8) << coche << right
         << setw(8) << setprecision(1) << horas
         << setw(10) << setprecision(2) << importe << "\n";
}

/*
Ejemplo de ejecución (horas 1.5, 4 y 24):
  Car       Hours    Charge
  1           1.5     20.00
  2           4.0     25.00
  3          24.0     50.00
  TOTAL      29.5     95.00

Nota: el ejemplo del enunciado muestra un total de 95.50, pero
20.00 + 25.00 + 50.00 = 95.00, así que el programa muestra 95.00.
*/
