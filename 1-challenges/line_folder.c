#include <stdio.h>
#define MAX_LINE_CHARACTERS 40

int main() {
    int c;
    int i = 0, last_space = 0, line_count = 0;
    char folded_text[100000];

    printf("Insert text:\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ') last_space = i;
        if (c == '\n') line_count = 0;

        folded_text[i] = c;
        ++line_count;
        ++i;
        if (line_count == MAX_LINE_CHARACTERS) {
            folded_text[last_space] = '\n';
            line_count = i - last_space - 1;
        }
    }
    printf("\n------- FOLDED TEXT -------\n");
    printf("%s", folded_text);
}