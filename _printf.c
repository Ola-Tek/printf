#include "main.h"
/**
 * _printf - print all characters
 * @format: format strings
 * Return: The number of characters
 */
int _printf(const char *format, ...)
{
	int i, num_char = 0, printed_char = 0;

	char c __attribute__((unused));

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			num_char += write(1, &format[i], 1);
		}
		else
		{
			i++;
			c = format[i];
			printed_char = handle_specifier(format[i], args);
			num_char += printed_char;
		}
	}
	va_end(args);
	return (num_char);
}
