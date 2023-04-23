#include "main.h"
/**
 * AA_spec_printf - function to choose the correct specifier format
 * @format: 
 * Return: 0 if success and -1 if '%' is the last char
 */

int AA_spec_printf(const char *format, va_list args)
{
	int out_1, count, p_state = 0;

	while (format && *format)
	{
		if (p_state == 0)
		{
			if (*format == '%' && *(format + 1) == '\0')
				return (-1);
			else if (*format == '%' && *(format + 1) == '%')
			{
				_putchar('%');
				format += 2;
			}
			else if (*format == '%')
				p_state = 1;
			else
				_putchar(*format);
		}
		else if (p_state == 1)
		{
			if (*format == 'c')
			{
				out_1 = va_arg(args, int);
				_putchar(out_1);
			}
			else if (*format == 's')
			{
				const char *s = va_arg(args, const char *);
				while (*s)
					_putchar(*s++);
			}
			else if(*format == 'd')
			{
				int i = va_arg(args, int);
				char AA_array[32];
				AA_itwos(i, chetos);
				for (count = 0 ; AA_array[count] != '\0' ; count ++)
					_putchar(AA_array[count]);
			}
			p_state = 0;
		}
		format++;
	}
	return (0);
}
