/*********************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 10 de octubre de 2019
 * Resumen: Programa que pide un número entero e informa sobre la 
 *          suma de las cifras que lo componen.
 ********************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Ha devuelto la suma de las cifras de «n» cuando «n» se escribe en
 *       base 10.
 */
int sumaCifras(int n) {
    if (n < 0) {
        n = -n;                 // si «n» es negativo, le cambia el signo
    }
    int suma = 0;               // suma de las cifras eliminadas de «n»
    while (n != 0) {
        suma = suma + n % 10;   // suma la cifra menos significativa de «n»
        n = n / 10;             // y la elimina de «n»
    }
    return suma;
}


/*
 * Programa que pide un número entero e informa sobre la 
 * suma de las cifras que lo componen.
 */
int main() {
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;

    cout << "Las cifras de " << numero << " suman "
         << sumaCifras(numero) << "." << endl;

    return 0;
}