#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0, j = 0, num;
	char *str;

	va_start(valist, format);

	while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'i':
						num = va_arg(valist, int);
						print_number(num);
						j++;
						i = i + 2;
						break;
					/*case 'c':
						write(1,va_arg(valist, int),1);
						j++;
						break;
					case 's':
						str = va_arg(valist, char *);
						write(1,str,length(str);
						j++;
						break;*/
				};
			};
			if (format[i] == '%')
			{
				_putchar(format[j + 1]);
				j++;
			}
			_putchar(format[i]);
			i++;
			j++;
		};
	write(1,"\n",1);
	va_end(valist);
}

int main (void)
{
	int numero = 4877555;

	_printf("Hola msfef %i dsafsdfasaf fsdf", numero);

	return (0);
}
