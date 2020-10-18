/*******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 10 de octubre de 2019
 * Resumen: Programa que pide un número entero y la posición de una
 *          cifra de dicho número e informa sobre la cifra que ocupa la citada
 *          posición.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 *  Pre:  i ≥ 1
 *  Post: Ha devuelto la «i»-ésima cifra menos significativa de «n» cuando
 *        «n» se escribe en base 10.
 */
unsigned int cifra(int n, unsigned int i) {
    if (n < 0) {
        n = -n;             // si «n» es negativo, le cambia el signo
    }
    for (unsigned int exp = 1; exp < i; exp++) {
        n = n / 10;         // elimina la cifra menos significativa de «n»
    }
    return n % 10;
}


/*
 * Programa que pide un número entero y la posición de una
 * cifra de dicho número e informa sobre la cifra que ocupa la citada
 * posición.
 */
int main() {
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;
    
    cout << "Seleccione la posición de una cifra: ";
    unsigned int posicion;
    cin >> posicion;
    
    cout << "La cifra situada en la posición " << posicion
         << " del número " << numero << " es "
         << cifra(numero, posicion) << "." << endl;

    return 0;
}