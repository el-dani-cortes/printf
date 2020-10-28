#include "holberton.h"

/**
 * print_address - prints addresses.
 * @a: taking in arguments
 * Return: number of digits printed
 */
int print_address(va_list a)
{
	unsigned long int p;
	int len = 0;

	p = va_arg(a, unsigned long int);
	if (p == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0", 1);
	write(1, "x", 1);
	len += print_hexa(p);
	len = len + 2;
	return (len);
}

/**
 * print_hexa - unsigned long int argument is converted to hexa in lowercase
 * @a: pointer to arguments
 * Return: number of digits printed
 */

int print_hexa(unsigned long int a)
{
	unsigned long int n, buff[1024];
	int i = 0, len = 0;
	char p;

	n = a;
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		buff[len] = n % 16;
		n /= 16;
		if (buff[len] > 9)
			buff[i] = buff[len] + 39;
		else
			buff[i] = buff[len];
		i++;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		p = buff[i] + '0';
		write(1, &p, 1);
	}
	return (len);
}
