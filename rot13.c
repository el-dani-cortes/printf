#include "holberton.h"

/**
 * print_rot13 - print a string to rot13 encode.
 * @a: Pointer to string.
 *
 * Return: lenght of the string encode in rot13
 */
int print_rot13(va_list a)
{
	int i, j, len = 0;
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char ch[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	char *p, *m;

	p = va_arg(a, char *);
	for (i = 0; p[i] != '\0'; i++)
		len++;
	m = malloc(sizeof(char) * (len + 1));
	if (!m)
		return ('\0');
	for (i = 0; i <= len; i++)
	{
		m[i] = p[i];
	}
	for (i = 0 ; m[i] != '\0' ; i++)
	{
		for (j = 0 ; alpha[j] != '\0' ; j++)
		{
			if (m[i] == alpha[j])
			{
				m[i] = ch[j];
				break;
			}
		}
	}
	for (i = 0; m[i] != '\0'; i++)
		write(1, &m[i], 1);
	free(m);
	return (len);
}
