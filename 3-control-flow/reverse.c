
#include <stdio.h>
#include <string.h>
/* reverse: reverse string s in place */
void reverse(char s[]) {
    int i,j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        int c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s", s);
}

int main() {
    char to_reverse[] = "Juan Collado";
    printf("reverse of %s:", to_reverse);
    reverse(to_reverse);
}
