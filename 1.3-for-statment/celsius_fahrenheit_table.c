#include <stdio.h>

// Symbolic Constants
#define LOWER 0
#define UPPER 300
#define STEP 20


// print Celsius-Fahrenheit table with for statement
int main() {
    int celsius;
    for (celsius=LOWER; celsius <= UPPER; celsius = celsius + STEP)
      printf("%3d %6.0f\n", celsius, (9.0/5.0) * celsius + 32);
}

