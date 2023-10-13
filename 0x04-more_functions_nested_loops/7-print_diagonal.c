#include "main.h"

/**
 * print_diagonal - prints diagonal using the '\' character
 * @n: number of times the '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	for (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j <= i ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
