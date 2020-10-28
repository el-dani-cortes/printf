#include "holberton.h"

/**
 * get_op_func - selects the correct function to perform the specifier
 * @s: operation to select function.
 *
 * Return: Pointer to function use to perform the operation. NULL is false.
 */
int (*get_op_func(char s))(va_list)
{
	format_t p_type[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_number},
		{'d', print_number},
		{'b', print_binary},
		{'r', print_rev},
		{'R', print_rot13},
		{'o', print_octal},
		{'u', print_unsigned},
		{'x', print_lowerhexa},
		{'X', print_upperhexa},
		{'p', print_address},
		{'\0', '\0'}
	};
	unsigned int j;

	for (j = 0; p_type[j].type != '\0'; j++)
	{
		if (s == p_type[j].type)
		{
			return (p_type[j].f);
		}
	}
	return (NULL);
}

/**
 * _printf - Print a string and formated s, c and %.
 * @format: string with the types to print.
 *
 * Return: Total of chars.
 */
int _printf(const char *format, ...)
{
	va_list p_list;
	unsigned int i, len = 0;
	int (*f)(va_list);

	va_start(p_list, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				f = get_op_func(format[i + 1]);
				if (f != NULL)
				{
					len += f(p_list);
					i++;
				}
				else
				{
					write(1, &format[i], 1);
					len++;
				}
			}
			else
			{
				write(1, &format[i], 1);
				len++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
	}
	va_end(p_list);
	return (len);
}
