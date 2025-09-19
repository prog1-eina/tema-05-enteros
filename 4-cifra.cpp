/******************************************************************************
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 3 de octubre de 2022
 * Resumen: Programa que pide un número entero y la posición de una
 *          cifra de dicho número e informa sobre la cifra que ocupa la citada
 *          posición.
 *****************************************************************************/
#include <iostream>
using namespace std;


/*
 * Programa que pide un número entero y la posición de una cifra de dicho
 * número e informa sobre la cifra que ocupa la citada posición.
 */
int main() {
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;
    
    cout << "Seleccione la posición de una cifra: ";
    unsigned posicion;
    cin >> posicion;

    unsigned n = numero;
    if (numero < 0) {
        n = -numero;             // si «n» es negativo, le cambia el signo
    }
    for (unsigned exp = 1; exp < posicion; exp++) {
        n = n / 10;         // elimina la cifra menos significativa de «n»
    }
    unsigned cifra = n % 10;


    cout << "La cifra situada en la posición " << posicion << " del número "
         << numero << " es " << cifra << "." << endl;
}