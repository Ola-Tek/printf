#include "main.h"
#include <unistd.h>
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
/**
 * pdi - writes an integer to stdout
 * @list: variadic list
 *
 * Return: number of chracters printed
 */
int pdi(va_list list)
{
	int num = va_arg(list, int);
	
	char num_str[12];

	int num_char = 0;

	int fd = 1;
	
	int length = 0;

	if (num < 0)
	{
		num_char += write(fd, "-", 1);
		num = -num;
	}

	for (int i = length - 1; 1 >= 0; i--)
	{
			num_str[i] = '0' + (num % 10);
			num /= 10;
	}

	num_str[length] = '\0';

	num_char += write(fd, num_str, length);
	
	return (num_char);
}
