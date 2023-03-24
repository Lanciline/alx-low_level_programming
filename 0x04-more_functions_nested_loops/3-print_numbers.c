#include "main.h"

/**
 * print_numbers - prints 0-9
 * only using _putchar twice
 * Return: 0
 */
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
