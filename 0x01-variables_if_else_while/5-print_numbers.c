#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{

	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
