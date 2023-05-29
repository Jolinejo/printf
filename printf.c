#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _printf - Entry point
 * Description:  check if letter is uppercase
 * @format: string
 * Return: int
 */
int _printf(const char *format, ...)
{
	int n = 0;
	int i = 1;
	int j;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[i + 1])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n++;
			i++;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar("%");
			n++;
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			n++;
		}
		else
		{
			s = va_arg(args, char*);
			j = 0;
			while (s[j])
			{
				_putchar(s[j]);
				n++;
				j++
			}
		}
		i += 2;
	}
	return (n);
}
