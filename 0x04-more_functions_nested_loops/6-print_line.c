#include "main.h"
/**
 * print_line - function that prints a line
 * @n: char we will be using to print the lines
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
