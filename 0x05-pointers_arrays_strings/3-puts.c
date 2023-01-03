#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: strings to be printed
 *
 * Return: nothing on success
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
			str++;
	}
	_putchar('\n');
}
