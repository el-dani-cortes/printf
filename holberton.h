#ifndef __FILE_H_
#define __FILE_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct format_s - Struct with type to print according % and function to use
 *
 * @type: conversion to compare.
 * @f: The printing function associated.
 */
typedef struct format_s
{
	char type;
	int (*f)();
} format_t;

/*Custom printf with some extras*/
int _printf(const char *format, ...);

/*Writes a character*/
int print_char(va_list a);

/*Writes a string*/
int print_string(va_list a);

/*Writes any number*/
int print_number(va_list a);

/*Writes decimal to binary*/
int print_binary(va_list a);

/*Writes characters to stdout*/
int _putchar(char c);

/*Writes a string in reverse*/
int print_rev(va_list a);

/*Writes a string to rot13 encode*/
int print_rot13(va_list a);

/*Writes numbers to octal*/
int print_octal(va_list a);

/*Writes unsigned integers*/
int print_unsigned(va_list a);

/*Writes numbers to hexa in lowercase*/
int print_lowerhexa(va_list a);

/*Writes numbers to hexa in lowercase*/
int print_upperhexa(va_list a);

/*Writes a address of a pointer*/
int print_address(va_list a);

/*Writes unsigned long int numbers to hexa in lowercase*/
int print_hexa(unsigned long int a);

#endif /*FILE_H*/
