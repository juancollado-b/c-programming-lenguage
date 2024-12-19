#include <stdio.h>

/* Declaration of the function power (function prototype)
 * Declares what arguments and return value are excepted
 * The definition of the function and any uses must respect the prototype
 */

int power(int base, int n);
int power_2(int base, int n);

int main() {
    for (int i = 0; i <=10; ++i) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
    int p = 1;
    for (int i = 0; i <= n; ++i) {
        p = p * base;
    }
    return p;
}

/* All functions arguments are passed "by value"
 * The called function is given the values of its args in temporary variables
 * The function cannot directly alter the original variable.
 * Only can alter its private temporary copy
 */
int power_2(int base, int n) {
    int p;
    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}