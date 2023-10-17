#include "main.h"
#include <stdio.h>
/**
 * putss - prints available characters
 * @c: input character
 * Return: i, for iterating.
 */
int putss(char *c)
{
	int i = 0; /* iterating through c */

	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			putchar(c[i]);
		}
	}
	return (i);
}
