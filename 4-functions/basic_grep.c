#include <stdio.h>
#define MAX_LINE 1000

int get_line(char line[], int max);
int str_index(const char source[], const char search_for[]);
char pattern[] = "ould";

int main() {
    char line[MAX_LINE];
    while (get_line(line, MAX_LINE) > 0) {
        if (str_index(line, pattern) >= 0) {
            printf("%s", line);
        }
    }
    return 0;
}

int get_line(char line[], int max) {
    int c;
    int i = 0;

    while (--max > 0 && (c=getchar()) != EOF && c != '\n') {
        line[i++] = c;
    }
    if (c == '\n') {
        line [i++] = c;
    }
    line[i] = '\0';
    return i;
}

int str_index(const char source[], const char search_for[]) {
    int j,k;

    for (int i = 0; source[i] != '\0'; ++i) {
        for (j=i, k=0; search_for[k] !='\0' && source[j]==search_for[k]; ++j, ++k)
            ;
        if (k > 0 && search_for[k] == '\0') {
            return i;
        }
    }
    return -1;
}