#include "main.h"

int main(void)
{
	int n = 0;

	_printf("%d is a %s number\n", 7, "good");
	n = _printf("This is an integer\n");
	_printf("%d\n", n);
	n = _printf("%s\n", "This is an integer");
	_printf("%d\n", n);
	n = _printf("%c%c\n", 'a', 'b');
	_printf("%d\n", n);
	n = _printf("%c% %c\n", 'a', 'b');
	_printf("%d\n", n);
	return (0);
}
