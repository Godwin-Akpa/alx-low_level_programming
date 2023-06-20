#include <main.h>
/**
 *print_alphabet - a function that 
 *prints 10 times the alphabet
 *in lowercase, followed by a new line
 *Return: 0 always success
 */
int print_alphabet_x10(void)
{
    int counter = 0;
    char letter = 'a';

    while (counter < 10) {
        int i = 0;
        while (i < 26) {
            _putchar(letter);
            letter++;
            i++;
        }

        counter++;
        letter = 'a';
    }

    _putchar('\n');
}
