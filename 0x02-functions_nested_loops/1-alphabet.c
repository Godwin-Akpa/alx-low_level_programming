#include <stdio.h>
/**
 * print_alphabet - A function that 
 * print alphabets in lowecase
 *
 * Retrun:void always success
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar("letter");
		letter++;
	}
	_putchar("\n");
}
