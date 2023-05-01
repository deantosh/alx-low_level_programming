#ifndef VAR_H
#define VAR_H

#include <stdarg.h>

/**
 * struct format_list - Defines the data structure of a format specifier.
 * @sym: A pointer to the specified symbol.
 * @f: A function pointer to the equivalent symbol function.
 *
 * Description: Defines the symbol data type and its equivalent
 *		function to print the argument of that type.
 */
typedef struct format_list
{
	char *sym;
	void (*f)(char *separator, va_list args);
} f_s;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/*HELPER FUNCTIONS - print_all*/
void print_a_char(char *separator, va_list args);
void print_an_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
void print_a_string(char *separator, va_list args);

#endif /*VAR_H*/
