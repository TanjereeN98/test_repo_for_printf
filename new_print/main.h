#ifndef AA_MAIN_H
#define AA_MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
void AA_itwos(int num, char *s_buff);
int AA_spec_printf(const char *format, va_list args);
int _printf(const char *format, ...);
#endif
