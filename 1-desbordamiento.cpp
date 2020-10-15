#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Ha mostrado los efectos de un desbordamiento de datos.
 */
int main() {
    int factorial = 1;                // factorial = 0!
    for (int i = 1; i <= 18; i++) {
        factorial = i * factorial;    // factorial = i!
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}
