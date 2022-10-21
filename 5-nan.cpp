/******************************************************************************\
 * Curso de Programación 1. Tema 8
 * Autores: Miguel Ángel Latre
 * Última revisión: 23 de octubre de 2018
 * Resumen: Programa que muestra un resultado con una codificación no válidas de
 *          datos de tipo real.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 5-nan.cpp -o 5-nan
 *       y ejecutarse en Windows a través de la orden
 *           .\5-nan.exe
 *       o en Linux y macOS
 *           ./5-nan
\******************************************************************************/

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
