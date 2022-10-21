/******************************************************************************\
 * Curso de Programación 1. Tema 8
 * Autores: Miguel Ángel Latre
 * Última revisión: 23 de octubre de 2018
 * Resumen: Programa que demuestra problemas de desbordamiento con datos
 *          de tipo real.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 2-desbordamiento.cpp -o 2-desbordamiento
 *       y ejecutarse en Windows a través de la orden
 *           .\2-desbordamiento.exe
 *       o en Linux y macOS
 *           ./2-desbordamiento
\******************************************************************************/

#include <iostream>
#include <cfloat>
using namespace std;

/*
 * Programa que muestra el resultado de un desbordamiento al trabajar con
 * datos de tipo real.
 */
int main() {
    // DBL_MAX es mayor real representable como double. Está definido en <cfloat>
    // Es un valor próximo a 1.79769313e308
    double x = DBL_MAX;
    cout << "x = " << x << endl;

    double y = 1.5 * x;
    cout << "y = " << y << endl;

    return 1;
}
