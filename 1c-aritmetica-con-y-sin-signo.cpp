/*******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre
 * Última revisión: 21 de octubre de 2021
 * Resumen: Programa que muestra los resultados de operaciones utilizando
 *          enteros con y sin signo.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que muestra resultados de una suma y una  multiplicación utilizando
 * enteros con y sin signo.
 */
int main() {
    int a = -8;
    unsigned b = 3;

    // Las siguientes instrucciones convierten implícitamente «a» en unsigned:
    // unsigned(a) = 2³² - |a| = 4294967288

    // La suma se calcula como (unsigned(a) + b) % 2³² =
    // = (4294967288 + 3) % 4294967296 = 4294967291
    cout << "Suma a + b: " << a + b << endl;
    // El producto se calcula como (unsigned(a) * b) % 2³² =
    // = (4294967288 * 3) % 4294967296 = 4294967272
    cout << "Producto a * b: " << a * b << endl;
    cout << endl;

    // Si queremos obtener la suma -8 + 3 o el producto de -8 * 3, hay que
    // convertir explícitamente b en entero con signo:
    cout << "Suma a + int(b): " << a + int(b) << endl;
    cout << "Producto a * int(b): " << a * int(b) << endl;

    return 0;
}