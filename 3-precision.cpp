/******************************************************************************\
 * Curso de Programación 1. Tema 8
 * Autores: Miguel Ángel Latre
 * Última revisión: 23 de octubre de 2018
 * Resumen: Programa que muestra problemas de precisión con datos
 *          de tipo real.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 3-precision.cpp -o 3-precision
 *       y ejecutarse en Windows a través de la orden
 *           .\3-precision.exe
 *       o en Linux y macOS
 *           ./3-precision
\******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Muestra un resultado con problemas de precisión.
 */
int main() {
    double x = 1e20;
    double y = 1;
    double z = x + y - x;
    cout << "z = " << z << endl;
    return 0;
}
