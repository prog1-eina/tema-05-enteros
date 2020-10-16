/*******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre
 * Última revisión: 16 de octubre de 2020
 * Resumen: Programa que muestra los efectos de un desbordamiento negativo.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que muestra los efectos de un desbordamiento negativo.
 */
int main() {
    int i = 2147483647;     // último entero con signo representable con 32 bits
    i++;
    cout << i << endl;

    return 1;
}
