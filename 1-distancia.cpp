/******************************************************************************\
 * Curso de Programación 1. Tema 8
 * Autores: Miguel Ángel Latre
 * Última revisión: 10 de octubre de 2019
 * Resumen: Programa interactivo que permite al usuario calcular la
 *          distancia entre dos puntos del plano.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 1-distancia.cpp -o 1-distancia
 *       y ejecutarse en Windows a través de la orden
 *           .\1-distancia.exe
 *       o en Linux y macOS
 *           ./1-distancia
\******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
 * Pre:  ---
 * Post: Devuelve la distancia euclídea entre los
 *       puntos (x1, y1) y (x2, y2).
 */
double distancia(double x1, double y1, double x2, double y2) {
    double dX = x1 - x2;
    double dY = y1 - y2;
    return sqrt(dX*dX + dY*dY);
}


/*
 * Programa que solicita al usuario las coordenadas reales de dos puntos y le
 * informa de la distancia euclídea ente los mismos.
 */
int main() {
    // Petición de los datos
    cout << "Introduzca las coordenadas de un punto: ";
    double x1, y1;
    cin >> x1 >> y1;
    cout << "Introduzca las coordenadas de otro punto: ";
    double x2, y2;
    cin >> x2 >> y2;

    // Cálculo de la distancia
    double d = distancia(x1, y1, x2, y2);

    // Escritura de resultados;
    cout << "La distancia entre los puntos es de " << fixed << setprecision(4)
         << d << " unidades" << endl;
    return 0;
}
