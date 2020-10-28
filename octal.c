#include "holberton.h"
/**
 * print_octal - the unsigned int argument is converted to octal
 * @a: pointer to arguments
 * Return: number of digits printed
 */
int print_octal(va_list a)
{
	unsigned int n, buff[1024];
	int i, len = 0;
	char p;

	n = va_arg(a, int);
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		buff[len] = n % 8;
		n /= 8;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		p = buff[i] + '0';
		write(1, &p, 1);
	}
	return (len);
}
