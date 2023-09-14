#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: the format string.
 *
 * Return: void.
 */


void print_all(const char * const format, ...)
{
	va_list args;
	int i, check_stat;

	char *str;

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
