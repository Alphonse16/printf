#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - defines a structure for symbols and functions
 * @sym: The operator
 * @f: function associated 
 */
struct convert
{
	char *sym;
	int(*f)(v_list);
};
typedef struct convert conver_t;

//Main functions
int parser(const char *format, conver_t f_list[], va_list arg_lisy);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif

