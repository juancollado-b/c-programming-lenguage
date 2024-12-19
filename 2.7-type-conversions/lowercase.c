/*This works for ASCII because corresponding upper case and lower case letters
are a fixed distance apart as numeric values and each alphabet is contiguous
there is nothing but letters between A and z.*/

#include <stdio.h>

char lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    }
    return c;
}

int main () {
    char str[] = "SaLamIN CON qUeSo";
    int i = 0;
    while (str[i] != '\0') {
        str[i] = lower(str[i]);
        ++i;
    }
    printf("LOWER: %s", str);
}