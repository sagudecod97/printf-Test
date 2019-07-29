#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0, num;
	char *str, c;

	va_start(valist, format);

	while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'd':
					case 'i':
						num = va_arg(valist, int);
						print_number(num);
						i = i + 2;
						break;
					case 'c':
						c = va_arg(valist, int);
						_putchar (c);
						i = i + 2;
						break;
					case 's':
						str = va_arg(valist, char*);
						write(1, str, length(str));
						i = i + 2;
						break;
					case '%':
						_putchar('%');
						i = i + 2;
						break;
					default:
						if (format[i + 1] == '\0')
						{
							_putchar(10);
							return (-1);
						}
						return (-1);
				};
			};
			if (format[i] != '\0')
			{
				_putchar(format[i]);
				i++;
			};
		};
	/*write(1,"\n",1);*/
	va_end(valist);
	return (0);
}

int main (void)
{
	int numero = 4877555;
	char c = 'c';
	char * str = "Hola Mundo";

	_printf("Hola msfef %i dsafsdfasaf fsdf %i\n", numero, 57878);
	_printf("This is a char: %c\n", c);
	_printf("This a fkn string: %s\n", str);
	_printf("A number: %i, a char: %c and a string: %s  %%  %%f%", numero, c, str);
	_printf("A simple string\n");
	_printf("Received a d: %d\n", numero);
	return (0);
}
