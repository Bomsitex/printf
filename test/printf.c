#include "main.h"
#define NARGS 1024

/**
 * _printf - print formatted output as per format specifiers
 * @format: the format specifier string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int printCount = 0, fpos = 0, t = 0;
	char buff[NARGS];
	/* Do the variadic stuff here !! */
	va_list ap;

	va_start(ap, format);

	for (t = 0; t < NARGS; t++)  /* initialise*/
	{
		buff[t] = '\0';
	}

	while (*format)
	{
		if (*format == '%')
		{
			format = processPercent(format,
			&fpos, ap, &printCount, buff);
		}
		else
		{
			buffchar(*format, buff);
			printCount++;
		}
		format++;
		fpos++;
	}
	write(1, buff, _strlen(buff));
	return (printCount);  /* should be number of characters printed */
}
