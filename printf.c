#include "main.h"
/**
 * _printf - print all characters
 * @format: format strings
 * Return: The number of characters
 */
int _printf(const char *format, ...)
{
	int i, str_num, num_char = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putdante(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putdante(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_num = putss(va_arg(args, char*));
			i++;
			num_char += (str_num - 1);
		}
		else if (format[i + 1] == '%')
		{
			putdante('%');
		}
		num_char++;
	}
	va_end(args);
	return (num_char);
}
