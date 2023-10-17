#include "main.h"
/**
 * handle_specifier - calls function associated with specifier
 * @c: specifier
 * @list: variadic list
 *
 * Return: number of characters printed
*/
int handle_specifier(char c, va_list list)
{
	int i;
	op_t ops[] = {
		{'c', pchar},
		{'s', pstr},
		{'\0', NULL},
	};

	for (i = 0; ops[i].specifier != '\0'; i++)
	{
		if (c == 'c')
		{
			return (pchar(list));
		}
		else if (c == 's')
		{;
			return (pstr(list));
		}
	}
	return (0);
}