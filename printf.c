#include "holberton.h"
#include <srtarg.h>

int digit(int n)
{
	if ((n /10) < 1)
	{
		return (1);
	};

	result = 1 + digit(n / 10);

	return (result);
}

int length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return- (i);
}

int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0, j = 0;
	char *str;
	char *p;

	va_start(valist);

	while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'i':
						num = va_arg(valist, int);
						p = _integer(va_arg(valist, int));
						write(1, p, digit(num));
						j++;
						break;
					case 'c':
						write(1,va_arg(valist, int),1);
						j++;
						break;
					case 's':
						str = va_arg(valist, char *);
						write(1,str,length(str);
						j++;
						break;
						};
			};
			if (format[i] == '%')
			{
				write(1,format[j + 1],1)
				j++;
			}
			write(1,format[i], 1);
			i++;
			j++;
		};
	write(1,'\n',1);
	va_end(valist);
}
