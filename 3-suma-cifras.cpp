/*******************************************************************************
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 3 de octubre de 2022
 * Resumen: Programa que pide un número entero e informa sobre la 
 *          suma de las cifras que lo componen.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que pide un número entero e informa sobre la suma de las cifras que
 * lo componen.
 */
int main() {
    // Petición del dato
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;

    // Cálculo de la suma de las cifras
    int n = numero;
    if (n < 0) {
        n = -n;                 // si «n» es negativo, le cambia el signo
    }

    unsigned suma = 0;          // suma de las cifras eliminadas de «n»
    while (n != 0) {
        suma = suma + n % 10;   // suma la cifra menos significativa de «n»
        n = n / 10;             // y la elimina de «n»
    }

    // Escritura del resultado
    cout << "Las cifras de " << numero << " suman " << suma << "." << endl;
}
