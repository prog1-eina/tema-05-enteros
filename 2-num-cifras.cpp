/************************************************************************************
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 30-9-2022
 * Resumen: Programa que pide un número entero e informa sobre su
 *          número de cifras.
 ************************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que pide un número entero e informa sobre el número de cifras que tiene.
 */
int main() {
    // Petición del dato
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;

    // Cálculo del número de cifras
    unsigned cuenta = 1;          // lleva la cuenta de las cifras identificadas
    int n = numero / 10;          // elimina la cifra menos significativa
    // Hemos comenzado la cuenta en 1 y se ha quitado una cifra antes de entrar
    // al bucle para tener en cuenta el caso particular del 0.

    while (n != 0) {
        // El valor de «cuenta» es igual al de cifras identificadas en «n».
        cuenta++;             // contabiliza la cifra menos significativa de «n»
        n = n / 10;           // y la elimina de «n».
    }

    // Escritura del resultado
    cout << "El número " << numero << " tiene " << cuenta << " cifras." << endl;
}
