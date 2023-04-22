#ifndef O_MAIN_H
#define O_MAIN_H
#include <stdrag.h>
#include <unistd.h>
int _printf(const char *format, ...);
char char_format(const char 1st_arg,va_list arg);
char *_format(const char* 2nd_arg, va_list arg);
int _putchar(char c);
typedef struct our_struct {
	char *au;
	void (*f)(char *, va_list);
} our_t;


#endif
