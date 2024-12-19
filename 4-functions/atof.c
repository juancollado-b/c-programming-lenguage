#include <ctype.h>

double atof(char s[]) {
    double val, power;
    int i;
    for (i = 0; isspace(s[i]); i++) // Skip white spaces at init
        ;
    const int is_negative_sign = s[i] == '-';
    const int sign = is_negative_sign ? -1 : 1;
    if (s[i] == '+' || is_negative_sign)
        i++;

    for (val = 0.0; isdigit(s[i]); ++i) {
        val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '.')
        i++;

    for (power = 1.0; isdigit(s[i]); ++i) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val / power;
}
