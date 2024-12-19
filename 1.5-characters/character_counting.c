#include <stdio.h>

int main() {
    long nc; // Long integers are 32-bits. int is 16-bits (max val of 32767)

    // The ++nc increments nc by 1
    for (nc = 0; getchar() != EOF; ++nc)
        ; // This semicolon (null statement) is necessary to satisfy a non-empty body rule for "for" loops

    printf("%ld characters counted\n", nc);
}