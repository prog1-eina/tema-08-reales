/******************************************************************************\
 * Curso de Programación 1. Tema 8 (reales)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 24 de octubre de 2019
 * Resumen: Aproximación al coseno
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 6-coseno.cpp -o 6-coseno
 *       y ejecutarse en Windows a través de la orden
 *           .\6-coseno.exe
 *       o en Linux y macOS
 *           ./6-coseno
\******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
 * Pre:  El valor de «x» viene expresado en radianes.
 * Post: Devuelve una aproximación al valor de cos x.
 */
double cos(double x) {
    // Se tiene en cuenta el desarrollo en serie de la función coseno:
    // cos x = 1 - x²/2! + x⁴/4! - x⁶/6! + x⁸/8! - x¹⁰/10! + ...
    const double COTA = 1.0e-15; // 10⁻¹⁵

    unsigned i = 0; // índice del término
    double termino = 1.0; // termino = (-1)ⁱ·x²ⁱ/(2i)!
    double resultado = termino; // resultado = suma términos calculados

    while (abs(termino) > COTA) {
        // Se incrementa «resultado» con el siguiente término de la serie:
        i++; // siguiente índice
        // termino = (-1)ⁱ·x²ⁱ/(2i)!
        termino = -termino * x * x / ((2*i) * (2*i-1));
        // resultado = suma de los términos calculados
        resultado += termino;
    }
    return resultado;
}

/*
 * Pre:  ---
 * Post: Programa de prueba de la función anterior (::cos), comparando los
 *       resultados que ofrece con la función de la biblioteca «cmath»
 *       (std::cos).
 */
int main() {
    cout << fixed << setprecision(14);
    for (double x = 0.0; x <= 2 * M_PI; x += M_PI/8) {
        cout << "cos(" << x << ") = " << setw(17) << ::cos(x)
             << " = " << setw(17) << std::cos(x) << endl;
    }
    return 0;
}
