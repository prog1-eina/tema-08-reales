/******************************************************************************\
 * Curso de Programación 1. Tema 8
 * Autores: Miguel Ángel Latre
 * Última revisión: 23 de octubre de 2018
 * Resumen: Programa que demuestra problemas de desbordamiento con datos
 *          de tipo real.
\******************************************************************************/

#include <iostream>
using namespace std;

/*
 * Programa que demuestra el resultado de un desbordamiento al trabajar con
 * datos de tipo real.
 */
int main() {
    double x = 1.79769313e308;
    double y = 2.0 * x;
    cout << "y = " << y << endl;
    return 0;
}
