/******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Resumen: Programa que pide un número natural y escribe en la pantalla si es 
 *          primo o no.
 *          Solución no optimizada: se busca un divisor del número.
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

    // Cálculo de la primalidad del número y escritura del resultado
    if (n < 2) {
        // «n» es 0 o 1.
        cout << "El número " << n << " no es primo." << endl;
    } else {
        // Se buscan posibles divisores de «n» a partir del 2:

        // «candidato» es el siguiente candidato a divisor de «n».
        unsigned candidato = 2;    // Primer candidato a divisor a probar

        // «encontrado» indica si se ha encontrado un divisor de «n».
        bool encontrado = false;

        while (!encontrado && candidato < n) {
            encontrado = n % candidato == 0;
            candidato++;
        }

        // Discriminación del resultado de la búsqueda de un divisor
        if (encontrado) {
            cout << "El número " << n << " no es primo." << endl;
        } else {
            cout << "El número " << n << " es primo." << endl;
        }
    }
}