#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Ha mostrado los efectos de un desbordamiento de datos.
 */
int main() {
    unsigned int factorial = 1;                // factorial = 0!
    for (iunsigned intnt i = 1; i <= 18; i++) {
        factorial = i * factorial;             // factorial = i!
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}
