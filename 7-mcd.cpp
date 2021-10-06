/*******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 6 de octubre de 2021
 * Resumen: Programa que pide dos números enteros y escribe en la pantalla su
 *          máximo común divisor.
 ******************************************************************************/
#include <iostream>
using namespace std;


/*
 *  Pre:  a ≠ 0 ∨ b ≠ 0
 *  Post: Ha devuelto el máximo común divisor de «a» y «b».
 */
unsigned mcd (int a, int b) {
    // Algoritmo de Tales para el cálculo del mcd
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    
    return a;
}


/*
 * Programa que pide dos números enteros y escribe en la pantalla su
 * máximo común divisor.
 */
int main() {
    cout << "Escriba dos números enteros: ";
    int numero1, numero2;
    cin >> numero1 >> numero2;
    
    if (numero1 == 0 && numero2 == 0) {
        cout << "No se puede calcular el máximo común divisor de 0 y 0." << endl;
        return 1;
    }
    else {
        cout << "El máximo común divisor de " << numero1 << " y " << numero2
             << " es " << mcd(numero1, numero2) << "." << endl;
        return 0;
    }
}