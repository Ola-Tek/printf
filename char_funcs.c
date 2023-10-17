#include "main.h"
/**
 * pchar - writes a character to stdout
 * @list: variadic list
 *
 * Return: number of characters printed
*/
int pchar(va_list list)
{
	char c = va_arg(list, int);

	if (list != NULL)
		return (write(1, &c, 1));

	return (-1);
}
/**
 * pstr - writes a string to stdout
 * @list: variadic list
 *
 * Return: number of characters printed
*/
int pstr(va_list list)
{
	char *str;
	int len = 0;

	str = va_arg(list, char *);

	if (str != NULL)
	{
		while (str[len] != '\0')
			len++;

		return (write(1, str, len));
	}
	return (-1);
}
