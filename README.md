# Ejercicios Introducción a la programación (entrega evaluable)

Ejercicios extraídos del texto guía del curso (Deitel, *C++ How to Program*).
Cada ejercicio está en su propio archivo `.cpp`. Las respuestas a las preguntas
teóricas están en comentarios dentro del código.

| Archivo | Ejercicio | Descripción |
| --- | --- | --- |
| `ej_3_11.cpp` | 3.11 | ¿Qué muestra el programa? (`while` con operador ternario) |
| `ej_3_12.cpp` | 3.12 | ¿Qué muestra el programa? (`while` anidados) |
| `ej_3_25a.cpp` | 3.25 a) | Factorial con `cpp_int` de Boost Multiprecision |
| `ej_3_25b.cpp` | 3.25 b) | Estimación de *e* con la serie |
| `ej_3_25c.cpp` | 3.25 c) | Cálculo de *e^x* con la serie |
| `ej_3_26_cifrar.cpp` | 3.26 | Cifrar un entero de cuatro dígitos |
| `ej_3_26_descifrar.cpp` | 3.26 | Descifrar un entero de cuatro dígitos |
| `ej_4_15.cpp` | 4.15 | Cálculo de π con la serie infinita (200 000 términos) |
| `ej_4_6.cpp` | 4.6 | ¿Qué hace este código? (`for` anidados) |
| `ej_4_8.cpp` | 4.8 | Producto de los enteros impares del 1 al 15 |
| `ej_5_1.cpp` | 5.1 | Evaluación de expresiones con `fabs`, `floor` y `ceil` |
| `ej_5_2.cpp` | 5.2 | Tarifas de aparcamiento (`calculateCharges`) |
| `ej_5_6.cpp` | 5.6 | Números aleatorios en distintos intervalos |
| `ej_5_18.cpp` | 5.18 | Inversión de cifras |
| `ej_5_21.cpp` | 5.21 | Lanzamiento de una moneda (`flip`) |
| `ej_5_26.cpp` | 5.26 | Torres de Hanói (recursividad) |

## Compilar
```
g++ -std=c++20 -o ejercicio ej_5_26.cpp
```
`ej_3_25a.cpp` necesita Boost instalado (cabeceras `boost/multiprecision`).
