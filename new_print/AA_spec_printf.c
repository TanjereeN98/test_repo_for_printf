#include "main.h"
/**
 * AA_spec_printf - function to choose the correct specifier format
 * @format: format received from the printf func
 * @args: list of arguments passed
 * Return: 0 if success and -1 if '%' is the last char
 */

int AA_spec_printf(const char *format, va_list args)
{
	int p_state = 0, printed_len = 0, y = 0, i = 0;
	const char error_msg[] = "error: spurious trailing ‘%’ in format [-Werror=format=]";

	while (format && *format)
	{
		if (p_state == 0)
		{
			if (*format == '%' && *(format + 1) == '\0')
			{
				while (*error_msg)
				{
					_putchar(error_msg[i]);
					i++;
				}
				exit (1);
			}
			else if (*format == '%' && *(format + 1) == '%')
			{
				_putchar('%');
				printed_len++;
				format++;
			}
			else if (*format == '%')
				p_state = 1;
			else
			{
				_putchar(*format);
				printed_len++;
			}
		}
		else if (p_state == 1)
		{
			y = AA_spec_mode(format, args, printed_len);
			printed_len += y;
			p_state = 0;
		}
		format++;
	}
	return (printed_len);
}
