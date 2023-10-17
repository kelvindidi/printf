#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include "main.h"


void handleFormatSpecifier(char specifier, va_list arguments, int *chars_printed)
{
	switch (specifier)
{
		case 's':
			{
				char *s = va_arg(arguments, char *);

				if (s != NULL)
{
					printf("%s", s);
					*chars_printed += strlen(s);
				}
else
{
					printf("(null)");
					*chars_printed += 6;
				}
				break;
			}

		case 'c':
			{
				char c = va_arg(arguments, int);

				printf("%c", c);
				(*chars_printed)++;
				break;
			}

		case 'd':
		case 'i':
			{
				int integer = va_arg(arguments, int);

				printf("%d", integer);
				(*chars_printed)++;
				break;
			}

		case 'o':
			{
				unsigned int octal = va_arg(arguments, unsigned int);

				printf("%o", octal);
				chars_printed++;
				break;
			}

		case 'X':
			{
				unsigned int HEX = va_arg(arguments, unsigned int);

				printf("%X", HEX);
				chars_printed++;
				break;
			}

		case 'x':
			{
				unsigned int hex = va_arg(arguments, unsigned int);

				printf("%x", hex);
				chars_printed++;
				break;
			}

		case 'p':
			{
				void *pointer = va_arg(arguments, void *);

				printf("%p", pointer);
				chars_printed++;
				break;
			}
		case 'u':
			{
				unsigned int u = va_arg(arguments, unsigned int);
			
				printf("%u", u);
				chars_printed++;
				break;
			}

		default:
			putchar('%');
			putchar(specifier);
			(*chars_printed) += 2;
			break;
	}
}

int _printf(char *formattable, ...) {
	int chars_printed = 0;
	va_list arguments;
	va_start(arguments, formattable);

	while (*formattable != '\0') {
		if (*formattable == '%') {
			formattable++;

			handleFormatSpecifier(*formattable, arguments, &chars_printed);
		} else {
			chars_printed++;
			putchar(*formattable);
		}

		formattable++;
	}

	va_end(arguments);

	return chars_printed;
}
