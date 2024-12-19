#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int max_line);
void copy(char to[], char from[]);

int main() {
    int len;
    int max = 0;
    char line[MAX_LINE];
    char longest[MAX_LINE];

    while ((len = get_line(line, MAX_LINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Longest line: %s\n", longest);
    }
    return 0;
}

/* Read a line into line[], return length
 * Arrays works different from other args
 * When a function receives an array, the passed value is the location of the begging of the array
 * There is not a copy of the array at all, so the function can access and alter the original array
 * In this example the argument received is line, and get_line modifies it directly
 */
int get_line(char line[], int max_line) {
    int c, i;

    for (i=0;i < max_line - 1 && (c=getchar()) != EOF  && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') ++i;
}