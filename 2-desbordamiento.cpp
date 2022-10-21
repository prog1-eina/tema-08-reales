/******************************************************************************\
 * Curso de Programación 1. Tema 8
 * Autores: Miguel Ángel Latre
 * Última revisión: 23 de octubre de 2018
 * Resumen: Programa que demuestra problemas de desbordamiento con datos
 *          de tipo real.
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
