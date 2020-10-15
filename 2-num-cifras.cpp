/*********************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 10 de octubre de 2019
 * Resumen: Programa que pide un número entero e informa sobre su
 *          número de cifras.
 ********************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Ha devuelto el número de cifras de «n» cuando este se escribe en
 *       base 10.
 */
unsigned int numCifras(int n) {
    unsigned int cuenta = 1;      // lleva la cuenta de las cifras identificadas
    n = n / 10;                   // elimina la cifra menos significativa de «n»
    while (n != 0) {
        // El valor de <cuenta> es igual al de cifras identificadas en «n»
        cuenta++;             // contabiliza la cifra menos significativa de «n»
        n = n / 10;           // y la elimina de «n».
    }
    return cuenta;
}


/*
 * Programa que pide un número entero e informa sobre su número de
 * cifras.
 */
int main() {
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;

    cout << "El número " << numero << " tiene "
         << numCifras(numero) << " cifras." << endl;

    return 0;
}