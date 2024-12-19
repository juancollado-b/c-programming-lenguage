#include <stdio.h>

int main() {
    int c;
    int nl = 0;

    /* A character written between single quotes represents an integer value equal
     * to the numerical value of the character in the machine's character set.
     * For example 'A' stands for 65, its corresponding ASCII value
     */
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }

    printf("%d lines counted\n", nl);
}