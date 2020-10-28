#include "holberton.h"

/**
 * print_string - Function that prints a string.
 * @a: string to print.
 *
 * Return: numbers of characters printed.
 */
int print_string(va_list a)
{
	char *p_string;
	unsigned int j, len = 0;

	p_string = va_arg(a, char *);
	if (!p_string)
		p_string = "(null)";
	for (j = 0; p_string[j] != '\0'; j++)
	{
		write(1, &p_string[j], 1);
		len++;
	}
	return (len);
}
/**
 * print_char - Function that prints a character.
 * @a: character to print.
 *
 * Return: number of characteres printed.
 */
int print_char(va_list a)
{
	char ch;
	unsigned int len = 0;

	ch = va_arg(a, int);
	write(1, &ch, 1);
	len++;
	return (len);
}
