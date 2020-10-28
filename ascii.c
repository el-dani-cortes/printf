#include "holberton.h"
/**
 * print_ascii - prints a string and non printable character ascii values
 * @a: string to print
 *
 * Return: number of chars printed
 */
int print_ascii(va_list a)
{
	unsigned int i, len = 0, j;
	char k, *p;

	p = va_arg(a, char*);
	if (!p)
		p = "(null)";
	for (i = 0; p[i]; i++)
	{
		if (p[i] < 32 || p[i] >= 127)
		{
			j = p[i];
			write(1, "\\", 1);
			write(1, "x", 1);
			len = len + 2;
			if (j > 0 && j < 16)
			{
				write(1, "0", 1);
				len++;
			}
			len = len + print_hexb(j);
		}
		else
		{
			k = p[i];
			write(1, &k, 1);
			len++;
		}
	}
	return (len);
}

/**
 * print_hexau - unsigned long int argument is converted to hexa in uppercase
 * @a: pointer to arguments
 * Return: number of digits printed
 */

int print_hexb(unsigned long int a)
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
			buff[i] = buff[len] + 7;
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
