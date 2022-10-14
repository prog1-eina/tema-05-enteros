/*******************************************************************************
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Ricardo J. Rodríguez
 * Última revisión: 14 de octubre de 2022
 * Resumen: Programa que muestra los efectos de un desbordamiento negativo.
 ******************************************************************************/
#include <iostream>
#include <climits>
using namespace std;

/*
 * Programa que muestra los efectos de un desbordamiento negativo.
 */
int main() {
    // INT_MAX es mayor entero con signo representable como int.
    // Está definido en <climits>
    // Si la implementación de int usa 32 bits, es 2³¹ - 1 = 2147483647
    int i = INT_MAX; 
    cout << "Antes de sumar: " << i << endl;
    i++;
    cout << "Tras sumar:    "  << i << endl;
}
