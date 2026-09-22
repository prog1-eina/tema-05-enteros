/******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre
 * Resumen: Programa que pide un número natural y escribe en la pantalla si es 
 *          primo o no.
 *          Solución ingenua: se cuentan todos los posibles divisores de «n».
 *****************************************************************************/
#include <iostream>
using namespace std;


/*
 * Programa que pide un número natural y escribe en la pantalla si es primo o
 * no.
 */
int main() {
    // Petición del dato
    cout << "Escriba un número natural: ";
    unsigned n;
    cin >> n;

    // Contamos el número de divisores.
    unsigned numDivisores = 0;
    for (unsigned candidato = 1; candidato <= n; candidato++) {
        if (n % candidato == 0) {
            numDivisores++;
        }
    }

    // Discriminación del resultado
    if (numDivisores == 2) {
        // «n» tiene exactamente dos divisores (1 y él mismo), luego es primo.
        cout << "El número " << n << " es primo." << endl;
    } else {
        cout << "El número " << n << " no es primo." << endl;
    }
}