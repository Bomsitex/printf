#include "main.h"

/**
 * printString - prints a string.
 *
 * @s: Pointer to the string to print.
 * @printCount: the count of printed characters
 * @buff: the print buffer
*/

void printString(char *s, int *printCount, char *buff)
{
	while (*s)
	{
		buffchar(*s, buff);
		(*printCount)++;
		s++;
	}
}

