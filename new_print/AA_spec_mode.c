#include "main.h"
/**
 * AA_spec_mode - function to choose the correct specifier format
 * @format: the printf format
 * @args: list of arguments passed
 * @printed_len: length of chars printed so far
 *
 * Return: 0 if success and -1 if '%' is the last char
 */

int AA_spec_mode(const char *format, va_list args, int printed_len)
{
	int i = 0, count, out_1;

	i = printed_len;
	if (*format == 'c')
	{
		out_1 = va_arg(args, int);
		_putchar(out_1);
		i++;
	}
	else if (*format == 's')
	{
		const char *s = va_arg(args, const char *);

		while (*s)
		{
			_putchar(*s++);
			i++;
		}
	}
	else if (*format == 'd' || *format == 'i')
	{
		int i = va_arg(args, int);
		char AA_array[32];

		AA_itwos(i, AA_array);
		for (count = 0 ; AA_array[count] != '\0' ; count++)
		{
			_putchar(AA_array[count]);
			i++;
		}
	}
	return (i);
}
