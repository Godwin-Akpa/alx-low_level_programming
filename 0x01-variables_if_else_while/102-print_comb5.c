#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description:to writes all unique combinations of 2
 * digit numbers
 *
 * Retrun:0 Always success
 */
int main() {
    int number1, number2;

    for (int i = 0; i <= 99; i++) {
        number1 = i / 10;
        number2 = i % 10;

        for (int j = i; j <= 99; j++) {
            number1 = j / 10;
            number2 = j % 10;

            putchar('0' + number1 / 10);
            putchar('0' + number1 % 10);

            putchar(' ');

            putchar('0' + number2 / 10);
            putchar('0' + number2 % 10);

            putchar(',');
            putchar(' ');
        }
    }

    return 0;
}
