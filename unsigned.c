#include "holberton.h"
/**
 * print_unsigned - prints a unsigned int.
 * @a: The argument pointer.
 * Return: number of digits printed.
 */
int print_unsigned(va_list a)
{
	unsigned int number, abs, cypher, div = 1, i, num, last, digit, abs_num;
	int len = 0;
	char p;

	number = va_arg(a, int);
	abs_num = number;
	abs = number;
	for (cypher = 1;  abs_num / 10 > 0; cypher++)
		abs_num = abs_num / 10;
	for (i = cypher - 1; i > 0; i--)
		div = div * 10;
	for (digit = cypher; digit >= 1; digit--)
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
