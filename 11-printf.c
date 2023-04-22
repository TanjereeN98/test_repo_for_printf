#include <main.h>
#include <stdarg.h>

/**
 * _printf - function that give us formatted output
 * @format: the format coming from the end-user
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count_2, count = 0, len = 0;
	char s[45] = "Please use valid specifier, c or s or d or i";
	our_t struc[] = {
                {"c", char_format},
                {"s", string_format},
                {"i", int_format},
		{"d", int_format},
                {NULL, NULL}
        };

	if (format != NULL)
		len = strlen(format);
	if (len == 0)
		exit(0);
	va_start(list, format);

	while (format && *format)
	{
		if (format[count] != '%')
			_putchar(format[count]);
		if (format[count] == '/' && format[count + 1] == '%')
			_putchar(format[count + 1]);
		count_2 = 0;

		while (format[count] == '%')
		{
			if (count_2 == 4)
			{
				for (i = 0; i < 43 ; i++)
					_putchar(s[i]);
				exit(0);
			}
			if (format[count + 1] == struc[count_2].au[0])
			{
				struc[count_2].f(list);
			}
			count_2++;
		}
		count++;
	}
	_putchar(count);
	va_end(list);
}
