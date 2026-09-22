/******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Resumen: Programa que pide un número natural y escribe en la pantalla si es 
 *          primo o no.
 *          Solución optimizada: se busca un divisor impar solo hasta la raíz
 *          cuadrada del número.
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
    if (n == 2) {
        // «n» es igual a 2, luego es primo.
        cout << "El número " << n << " es primo." << endl;
    } else if (n < 2 || n % 2 == 0) {
        // «n» es menor que 2 o par mayor que 2.
        cout << "El número " << n << " no es primo." << endl;
    } else {
        // Se buscan posibles divisores impares de «n» a partir del 3:

        // «candidato» indica el siguiente impar candidato a divisor de «n».
        unsigned candidato = 3;    // Primer impar candidato a divisor a probar

        // «encontrado» indica si se ha encontrado un divisor de «n».
        bool encontrado = false;

        while (!encontrado && candidato * candidato <= n) {
            encontrado = n % candidato == 0;
            candidato = candidato + 2;
        }

        // Discriminación del resultado de la búsqueda de un divisor
        if (encontrado) {
            cout << "El número " << n << " no es primo." << endl;
        } else {
            cout << "El número " << n << " es primo." << endl;
        }
    }
}