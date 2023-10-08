/******************************************************************************\
 * Curso de Programación 1. Tema 8 (reales)
 * Autores: Miguel Ángel Latre
 * Última revisión: 24 de octubre de 2019
 * Resumen: Programa que muestra problemas de precisión con datos de tipo real,
 *          basado en la respuesta del usuario kennytm a «Which is the first
 *          integer that an IEEE 754 float is incapable of representing
 *          exactly?». Stack Overflow. 2010.
 *          https://stackoverflow.com/questions/3793838/ (consultado el
 *          20-10-2021).
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 4-precision-naturales-doubles.cpp -o 4-precision-naturales-doubles
 *       y ejecutarse en Windows a través de la orden
 *           .\4-precision-naturales-doubles.exe
 *       o en Linux y macOS
 *           ./4-precision-naturales-doubles
\******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que muestra cuál es el primer natural no representable como double.
 */      
int main() {
    double x = 9007199254740992;  // 2⁵³ 
    double y = 9007199254740993;  // 2⁵³ + 1
    
    cout << fixed;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    return 0;
}
