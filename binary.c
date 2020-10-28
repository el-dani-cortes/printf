#include "holberton.h"
/**
 * print_binary - the unsigned int argument is converted to binary
 * @a: taking in arguments
 * Return: number of digits printed
 */
int print_binary(va_list a)
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
		buff[len] = n % 2;
		n /= 2;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		p = buff[i] + '0';
		write(1, &p, 1);
	}
	return (len);
}
