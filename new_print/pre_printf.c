#include "main.h"
int _printf(const char *format, ...)
{
	int y;
	va_list args_list;
	va_start(args_list, format);
	y = AA_spec_printf(format, args_list);
	va_end(args_list);
	return (y);
}
