#include "main.h"

/**
 * buffchar -  write character to buffer
 *
 * @ch: the character to write
 * @buff: the buffer
 */
void buffchar(int ch, char *buff)
{
char ch2 = ch;
	_strncat(buff, &ch2, 1);
}
