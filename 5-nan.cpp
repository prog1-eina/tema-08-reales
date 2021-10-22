/******************************************************************************\
 * Curso de Programación 1. Tema 8
 * Autores: Miguel Ángel Latre
 * Última revisión: 23 de octubre de 2018
 * Resumen: Programa que muestra un resultado con una codificación no válidas de
 *          datos de tipo real.
 ******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

/*
 * Programa que muestra un resultado con una codificación no válidas de datos de
 * tipo real.
 */
int main() {
    double x = sqrt(-1);
    cout << "x = " << x << endl;
    return 0;
}
