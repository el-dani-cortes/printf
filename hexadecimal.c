#include "holberton.h"

/**
 * print_lowerhexa - unsigned int argument is converted to hexa in lowercase
 * @a: pointer to arguments
 * Return: number of digits printed
 */

int print_lowerhexa(va_list a)
{
	unsigned int n, buff[1024];
	int i = 0, len = 0;
	char p;

	n = va_arg(a, int);
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

/**
 * print_upperhexa - unsigned int argument is converted to hexa in uppercase
 * @a: pointer to arguments
 * Return: number of digits printed
 */

int print_upperhexa(va_list a)
{
	unsigned int n, buff[1024];
	int i = 0, len = 0;
	char p;

	n = va_arg(a, int);
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
