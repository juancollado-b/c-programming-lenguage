#include <stdio.h>

/* print Fahrenheit-Celsius table
 * Using floating point precision
 * for fahr = 0, 20, 40, ..., 300 */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    /* ---- Arithmetics operations -----
     * If an arithmetic operator has integer operands - Integer operation
     * If an arithmetic operator has float-point operands - Float operation
     * If one operand is int and the other is float, the int is converted to float - Float operation
     */

    // Using floating point we don't have the int division truncated to 0 problem
    printf("Fahrenheit-Celsius Table\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/*  ---- printf ----
 * %3.0f indicates a width of at least 3 characters and a float arg with no decimal point (0f)
 * %6.1f indicates a width of at least 6 characters and a float arg with 1 decimal point (1f)
*/