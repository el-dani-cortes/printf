#include "holberton.h"

/**
 * print_number - Prints any number
 * @a: Number to print.
 *
 * Return: number of digits printed.
 */
int print_number(va_list a)
{
	unsigned int abs, cifra, div = 1, i, num, last, digit, abs_num;
	int number, len = 0;
	char p;

	number = va_arg(a, int);
	if (number < 0)
	{
		write(1, "-", 1);
		abs_num = -1 * number;
		abs = -1 * number;
		len++;
	}
	else
	{
		abs_num = number;
		abs = number;
	}
	for (cifra = 1;  abs_num / 10 > 0; cifra++)
		abs_num = abs_num / 10;
	for (i = cifra - 1; i > 0; i--)
		div = div * 10;
	for (digit = cifra; digit >= 1; digit--)
	{
		num = abs / div;
		if (num >= 10)
		{
			last = num % 10;
			p = last + '0';
			write(1, &p, 1);
			len++;
		}
		else
		{
			p = num + '0';
			write(1, &p, 1);
			len++;
		}
		div = div / 10;
	}
	return (len);
}
