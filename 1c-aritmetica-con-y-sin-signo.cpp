/*******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre
 * Última revisión: 6 de octubre de 2021
 * Resumen: Programa que muestra los resultados de una multiplicación utilizando
 *          enteros con y sin signo.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que muestra los resultados de una multiplicación utilizando enteros 
 * con y sin signo.
 */
int main() {
    int a = -8;
    unsigned b = 3;

    // La siguiente instrucción convierte implícitamente «a» en unsigned:
    // unsigned(a) = 2³² - |a| = 4294967288
    // Escribirá el resultado de (unsigned(a) * b) % 2³² =
    // = (4294967288 * 3) % 4294967296 = 4294967272
    cout << a * b << endl;

    // Si queremos obtener el producto de -8 * 3, hay que convertir
    // explícitamente b en entero con signo:
    cout << a * int(b) << endl;

    return 0;
}