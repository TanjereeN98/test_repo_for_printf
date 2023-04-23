#include "main.h"
void _printf(const char *format, ...)
{
	va_list args_list;
	va_start(args_list, format);
	AA_spec_printf(format, list);
	va_end(list);
}
