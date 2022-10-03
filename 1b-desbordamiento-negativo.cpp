/*******************************************************************************
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre
 * Última revisión: 6 de octubre de 2021
 * Resumen: Programa que muestra los efectos de un desbordamiento negativo.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que muestra los efectos de un desbordamiento negativo.
 */
int main() {
    int i = 2147483647; // último entero con signo representable con 32 bits (2³¹ - 1)
    i++;
    cout << i << endl;
}
