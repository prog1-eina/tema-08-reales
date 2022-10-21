/******************************************************************************\
 * Curso de Programación 1. Tema 8
 * Autores: Miguel Ángel Latre
 * Última revisión: 23 de octubre de 2018
 * Resumen: Programa que muestra problemas de precisión con datos
 *          de tipo real.
\******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Ha mostrado un resultado con problemas de precisión.
 */
int main() {
    double x = 1e20;
    double y = 1;
    double z = x + y - x;
    cout << "z = " << z << endl;
    return 0;
}
