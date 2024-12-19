#include <ctype.h>
#include <stdio.h>

int atoi(const char s[]) {
    int i, n;

    for (i=0; isspace(s[i]); i++)
        ;

    const int is_negative = s[i] == '-';
    const int sign = is_negative ? -1 : 1;
    if (s[i] == '+' || is_negative)
        i++;
    for (n=0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}

int main() {
    char to_atoi[] = "-23-4s976";
    printf("ATOI THIS %s = %d", to_atoi, atoi(to_atoi));
}