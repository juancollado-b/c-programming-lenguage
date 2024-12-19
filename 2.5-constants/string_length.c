/* A string constant is a sequence of zero o more characters sourrended by double quotes
 * "i am a string"
 * "hello," "world" Se concatena a "hello, world"
 */

#include <stdio.h>

int strlen(const char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

int main() {
    char str[] = "salamin con queso";
    printf("Length of '%s' is %d", str, strlen(str));
}