![](https://i.imgur.com/CnW6aHr.png)

### Description
`_printf` is our custom implementation of the C `printf` program function . It produces an output according to format described. It writes to stdout *(standard output stream).*

### Environment
`_printf` has been tested on Ubuntu 14.04.6 and 18.04.3 LTS
Done and tested with VirtualBox on Ubuntu via Vagrant(2.2.10)

### Usage
**String**
* Specifier: `%s`
* Input:  `len = _printf("I am a string. \n");`
* Output: `I am a string`

**Character**
* Specifier: `%c`
* Input:  `_printf("char: %c\n", 'A');`
* Output: `char: A`

**Integer**
* Specifier: `%i`
* Input:  `_printf("Length: %i\n", len);
* Output: `Length: 16`

**Decimal:**
* Specifier: `%d`
* Input:  `_printf("%d\n", 1000);`
* Output: `1000`

**Unsigned Integer:**
* Specifier: `%u`
* Input:  `unsigned int ui = (unsigned int)INT_MAX + 1024;`
	  `_printf("Unsigned:[%u]\n", ui);                `
* Output: `Unsigned:[2147484671]`

**Octal:**
* Specifier: `%o`
* Input:  `_printf("Unsigned octal:[%o]\n", ui);`
* Output: `Unsigned octal:[20000001777]`

**Hexadecimal:**
* Specifier: `%x` lowercase `%X` UPPERCASE
* Input:  `_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);`
* Output: `Unsigned hexadecimal:[800003ff, 800003FF]`

### Main Functionality

- [X] Produces output with (printf) conversion specifiers c, s, and %.
- [X] Handles conversion specifiers d, i.
- [X] man page added.

### Advanced Functionality

- [X] Handles conversion specifier b.
- [X] Handles conversion specifiers u, o, x, X.
- [ ] Uses a local buffer of 1024 chars in order to call write as little as possible.
- [X] Handles conversion specifier S.
- [X] Handles conversion specifier p.
- [ ] Handles flag characters +, space, and # for non-custom conversion specifiers.
- [ ] Handles length modifiers l and h for non-custom conversion specifiers.
- [ ] Handles the field width for non-custom conversion specifiers.
- [ ] Handles the precision for non-custom conversion specifiers.
- [ ] Handles the 0 flag character for non-custom conversion specifiers.
- [X] Handles the custom conversion specifier r that prints the reversed string.
- [X] Handles the custom conversion specifier R that prints the rot13'ed string.
- [ ] Ultimate goal: All above options working seamlessly together `WORK IN PROGRESS.`

## Authors
[Andres Lopez](https://github.com/andylopezr)-profesor.de.ingles@aol.com

[Daniel Cortes](https://github.com/el-dani-cortes)-danicor83@gmail.com