/******************************************************************************
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Resumen: Programa que muestra los efectos de un desbordamiento.
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que muestra los efectos de un desbordamiento.
 */
int main() {
    unsigned factorial = 1;                              // factorial = 0!
    for (unsigned i = 1; i <= 18; i++) {
        factorial = i * factorial;                       // factorial = i!
        cout << i << "! = " << factorial << endl;
    }
}
