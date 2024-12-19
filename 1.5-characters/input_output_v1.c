#include <stdio.h>

/* Copy an input to output one character at a time */
int main() {
    int c; // We use int type to distinguish the end of the input with EOF

    /* getchar is a blocking function that waits to an input
     * then process that input one character at a time (at a function call)
     * until there is no more characters, to again, block waiting for more input
     * EOF (end of life) is an integer defined in <stdio.h>
     * it return a distinguished value to know that there is not more input (CTRL + D)
     */
    while((c = getchar()) != EOF) {
         putchar(c);
    }
    printf("EOF detected. Exiting program.\n");
}