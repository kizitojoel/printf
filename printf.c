#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints the characters in a string
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	char c __attribute__((unused));
	int holder __attribute__((unused));
	char *str __attribute__((unused));
	va_start(args, format);
	while (*(format) != '\0')
	{
		if (*format == 37)
		{
			if (format[1] == 'c')
			{
				_putchar(va_arg(args, int));
				i += 1; format += 2;
			}
			if (format[1] == '%')
			{
				_putchar('%');
				i += 1, format += 2;
			}
			if (format[1] == 's')
			{
				str = va_arg(args, char*);
				while (*str != '\0')
				{
					i += 1;
					_putchar(*str++);
				}
				format += 2;
			}
			if (format[1] == 'd')
			{
				print_numbers(va_arg(args, int));
				format += 2;
			}
			continue;
		}
		_putchar(*format++);
		i++;
	}
	va_end(args);
	return (i);
}
