/*********************************************************************************************\
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 25-9-2023
 * Resumen: Programa que pide un número entero y escribe en la pantalla su imagen especular.
\*********************************************************************************************/
#include <iostream>
using namespace std;


/*
 * Programa que pide un número entero y escribe en la pantalla su imagen
 * especular.
 */
int main() {
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;

    unsigned n = numero;
    if (numero < 0) {
        n = -numero;                  // si «numero» es negativo, le cambia el signo
    }

    // Variable para el cálculo de la imagen especular de «n»
    int imagen = 0;
    while (n != 0) {
        // Incorpora el dígito menos significativo de «n» a la variable «imagen»
        imagen = 10 * imagen + n % 10;
        // Y lo elimina de «n»
        n = n / 10;
    }
    
    // Se devuelve el valor «imagen» con el signo que tenía «n» al principio de
    // la ejecución de este programa.
    if (numero < 0) {
        imagen = -imagen;
    }

    cout << "La imagen especular de " << numero << " es " << imagen << "." << endl;
}