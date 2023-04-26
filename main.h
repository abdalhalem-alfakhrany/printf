#ifndef _MAIN_
#define _MAIN_
#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "string.h"

typedef struct specifier_handler specifier_handler;
/**
 * struct specifier_handler - struct to store specifier and its handeler
 * @specifier: the specifier char
 * @handler: function pointer to handel spacifier
 */
struct specifier_handler
{
	char specifier;
	int (*handler)(char *, va_list *);
};

int _printf(const char *format, ...);

int c_handler(char *, va_list *);
int s_handler(char *, va_list *);
int percentage_handler(char *, va_list *);

#endif
