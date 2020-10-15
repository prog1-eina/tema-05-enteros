/*********************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 14 de octubre de 2019
 * Resumen: Programa que pide un número entero y escribe en la pantalla su imagen
 *          especular.
 ********************************************************************************/
#include <iostream>
using namespace std;

/*
 *  Pre:  ---
 *  Post: Ha devuelto el número que escrito en base 10 es la imagen
 *        especular de «n» cuando «n» se escribe también en base 10.
 */
int imagen(int n) {
    // «negativo» memoriza si «n» es, inicialmente, positivo o negativo.
    bool negativo = n < 0;
    if (n < 0) {
        n = -n;                  // si «n» es negativo, le cambia el signo
    }

    // Variable para el cálculo de la imagen especular de «n»
    int resultado = 0;
    while (n != 0) {
        // Incorpora el dígito menos significativo de «n» a la variable
        // «resultado»
        resultado = 10 * resultado + n % 10;
        // Y lo elimina de «n»
        n = n / 10;
    }
    
    // Se devuelve el valor «resultado» con el signo que tenía «n» al
    // la ejecución de esta función.
    if (negativo) {
        return -resultado;
    }
    else {
        return resultado;
    }
}


/*
 * Programa que pide un número entero y escribe en la pantalla su imagen
 * especular.
 */
int main() {
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;
    
    cout << "El número imagen especular de " << numero
         << " es el " << imagen(numero) << "." << endl;

    return 0;         
}