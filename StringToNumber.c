#include <stdio.h>
#include <limits.h>
#include <ctype.h>  

int myAtoi(char *str) {
    int i = 0;
    long result = 0;
    int sign = 1;

    while (str[i] == ' ') {
        i++;
    }

    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }

    while (isdigit(str[i])) {
        int digit = str[i] - '0';

        result = result * 10 + digit;

        if (sign * result > INT_MAX) return INT_MAX;
        if (sign * result < INT_MIN) return INT_MIN;

        i++;
    }

    return (int)(sign * result);
}

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf(" %[^\n]s", str); // leading space handles leftover newline

    int num = myAtoi(str);
    printf("Number is: %d\n", num);

    return 0;
}
