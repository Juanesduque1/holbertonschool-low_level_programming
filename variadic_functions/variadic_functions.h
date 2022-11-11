#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct type - Struct type
 *
 * @type: Type of the argument
 * @f: The function associated
 */

typedef struct type
{
	char *t;
	void (*f)();
} type_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
