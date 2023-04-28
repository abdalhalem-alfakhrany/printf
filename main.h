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
int handel_specifires(va_list *list, const char *format, char *str, int *size);

/* specifires handlers functions*/
int c_handler(char *, va_list *);
int s_handler(char *, va_list *);
int d_handler(char *, va_list *);
int i_handler(char *, va_list *);
int b_handler(char *, va_list *);
int U_handler(char *, va_list *);
int percentage_handler(char *, va_list *, const char *);

#endif
