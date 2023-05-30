#include "main.h"
/**
 * _printf - Entry point
 * Description:  check if letter is uppercase
 * @format: string
 * Return: int
 */
int _printf(const char *format, ...)
{
	int n = 0;
	int i = 0;
	int j;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[i])
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
			_putchar('%');
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
				j++;
			}
		}
		i += 2;
	}
	return (n);
}
