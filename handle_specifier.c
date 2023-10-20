#include "main.h"
/**
 * handle_specifier - calls function associated with specifier
 * @str: pointer to format string
 * @list: variadic list
 *
 * Return: number of characters printed
*/
int handle_specifier(const char *str, va_list list)
{
	int i;
	op_t ops[] = {
		{'c', pchar},
		{'s', pstr},
		{'\0', NULL},
	};

	for (i = 0; ops[i].specifier != '\0'; i++)
	{
		if (ops[i].specifier == *str)
		{
			return (ops[i].f(list));
		}
	}
	str--;
	write(1, str, 1);
	str++;
	write(1, str, 1);
	return (2);
}
