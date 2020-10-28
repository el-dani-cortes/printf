#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @a: Variable string.
 *
 * Return: lenght of the string.
 */
int print_rev(va_list a)
{
	char *p, s;
	int i = 0, len = 0;

	p = va_arg(a, char *);
	while (p[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		s = p[i];
		write(1, &s, 1);
	}
	return (len);
}
