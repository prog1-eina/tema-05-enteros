#include <iostream>
using namespace std;

/*
 * Programa que muestra los efectos de un desbordamiento.
 */
int main() {
    unsigned int factorial = 1;                // factorial = 0!
    for (unsigned int i = 1; i <= 18; i++) {
        factorial = i * factorial;             // factorial = i!
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}
