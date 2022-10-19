#include "main.h"

/**
 * printHexUpperDigits - prints 0-15 in hex upper digits.
 *
 * @n: The hex to be printed.
 * @printCount: the count of printed characters
 * @buff: the print buffer
*/

void printHexUpperDigits(int n, int *printCount, char *buff)
{
	switch (n)
	{
	case 0:
		buffchar('0', buff);
	break;
	case 1:
		buffchar('1', buff);
	break;
	case 2:
		buffchar('2', buff);
	break;
	case 3:
		buffchar('3', buff);
	break;
	case 4:
		buffchar('4', buff);
	break;
	case 5:
		buffchar('5', buff);
	break;
	case 6:
		buffchar('6', buff);
	break;
	case 7:
		buffchar('7', buff);
	break;
	case 8:
		buffchar('8', buff);
	break;
	case 9:
		buffchar('9', buff);
	break;
	case 10:
		buffchar('A', buff);
	break;
	case 11:
		buffchar('B', buff);
	break;
	case 12:
		buffchar('C', buff);
	break;
	case 13:
		buffchar('D', buff);
	break;
	case 14:
		buffchar('E', buff);
	break;
	case 15:
		buffchar('F', buff);
	break;
	}
	if (n >= 0 && n <= 9)
	{
		(*printCount)++;
	}
	else if (n >= 10 && n <= 15)
	{
		(*printCount) += 2;
	}
}

