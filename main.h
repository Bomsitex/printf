#ifndef _PRINTF_BK_
#define _PRINTF_BK_

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define BUFFSIZE 1024
#define BUFFLEN (BUFFSIZE - 1)

/* printf specific functions */
int _printf(const char *format, ...);
const char *processPercent(const char *format,
	int *fpos, va_list ap, int *printCount, char *buff);
int printArg(va_list ap, char cspec, int *printCount, char *buff);
void printInt(int n, int *printCount, char *buff);
void printChar(char ch, int *printCount, char *buff);
void printString(char *s, int *printCount, char *buff);
void printStringUpper(char *s, int *printCount, char *buff);
void printUnsignedInt(unsigned int n, int *printCount, char *buff);
void printUnsignedOctal(unsigned int n, int *printCount, char *buff);
void printBinary(unsigned int n, int *printCount, char *buff);
void printHexLower(unsigned int n, int *printCount, char *buff);
void printHexUpper(unsigned int n, int *printCount, char *buff);
void printHexLowerDigits(int n, int *printCount, char *buff);
void printHexUpperDigits(int n, int *printCount, char *buff);
void printPointer(unsigned long int n, int *printCount, char *buff);
void printPointerDigits(int n, int *printCount, char *buff);
void buffchar(int ch, char *buff);


/* team library functions */
int _putchar(char c);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strchr(char *s, char c);


#endif /* _PRINTF_BK_ */
