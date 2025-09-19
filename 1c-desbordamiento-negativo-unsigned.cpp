/******************************************************************************
 * Curso de Programación 1. Tema 5
 * Autores: Ricardo J. Rodríguez
 * Última revisión: 14 de octubre de 2022
 * Resumen: Programa que muestra los efectos de un desbordamiento negativo con
 *          datos de tipo unsigned.
 *****************************************************************************/
#include <iostream>
#include <climits>
using namespace std;

/*
 * Programa que muestra los efectos de un desbordamiento negativo con datos de
 * tipo unsigned.
 */
int main() {
    // UINT_MAX es mayor entero sin signo representable como unsigned.
    // Está definido en <climits>
    // Si la implementación de unsigned usa 32 bits, es 2³² - 1 = 4294967295
    unsigned i = UINT_MAX; 
    cout << "i = " << i << endl;
    cout << "¿¿i == -1??: " << boolalpha << (i == -1) << endl;
}
