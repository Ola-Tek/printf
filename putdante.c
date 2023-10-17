#include "main.h"
/**
 * putdante - print chracters like putchar
 * @c: input character
 * Return: 1
 */
int putdante(char c)
{
	return (write(1, &c, 1));
}
