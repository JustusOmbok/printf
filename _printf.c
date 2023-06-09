#include "main.h"

/**
 * _printf - prints to the output
 * @format: pointer
 * Return: input length
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vfprintf(stdout, format, arg);

	va_end(arg);

	return (done);
}
