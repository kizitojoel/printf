#include <unistd.h>
#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int i = 0;
	char c __attribute__((unused));
	int holder __attribute__((unused));
	char *str __attribute__((unused));
	va_list args;
	
	va_start(args, format);
	while (*(format) != '\0')
	{
		if (*format == 37)
		{
			if (format[1] == 'c')
				_putchar(va_arg(args, int));
			if (format[1] == '%')
				_putchar('%');
			if (format[1] == 's')
			{
				str = va_arg(args, char*);
				while (*str != '\0')
					_putchar(*str++);
			}
			format += 2;
			i += 2;
			continue;
		}
		_putchar(*format++);
		i++;
	}
	va_end(args);
	return (i);
}
int main(void)
{
	_printf("Joel is Nice\n");
	_printf("%c's birthday is tomorrow\n", 'A');
	_printf("%%, %c is tawp\n", 'Z');
	_printf("String:[%s]\n", "I am a string !");
	
	return (0);
}
