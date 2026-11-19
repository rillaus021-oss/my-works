#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	char	c;
    int     n;
    unsigned int    u;
    int	count;
    char    *str;

	i = 0;
    count = 0;
	va_start(args, format);

	while (format[i])
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            i++;
            count++;
        }
        else if (format[i + 1] == 'c')
        {
            c = va_arg(args, int);
            count += ft_putchar(c);
            i += 2;
        }
        else if (format[i + 1] == 's')
        {
            str = va_arg(args, char *);
            i += 2;
            count += ft_putstr(str);
        }
        else if (format[i + 1] == '%')
        {
            write(1, "%", 1);
            i += 2;
            count++;
        }
        else if (format[i + 1] == 'u')
        {
            u = va_arg(args, unsigned int);
            i += 2;
            count += ft_putunsigned(u);
        }
        else if (format[i + 1] == 'd' || format[i + 1] == 'i')
        {
            n = va_arg(args, int);
            count += ft_putnbr(n);
            i += 2;
        }
        else if (format[i + 1] == 'x' || format[i + 1] == 'X')
        {
            u = va_arg(args, unsigned int);
            count += ft_puthex(u, format[i + 1]);
            i += 2;
        }
        else if (format[i + 1] == 'p')
        {
            count += ft_printptr(va_arg(args, void *));
            i += 2;
        }
        else
            i++;
    }

	va_end(args);
	return (count);
}