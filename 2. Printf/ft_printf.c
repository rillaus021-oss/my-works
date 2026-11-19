#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
    unsigned int    u;
    int	count;

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
        else if (format[i + 1] == 'c' || format[i + 1] == 's' || format[i + 1] == 'd'
                || format[i + 1] == 'i' || format[i + 1] == 'u' || format[i + 1] == 'x' 
                || format[i + 1] == 'X' || format[i + 1] == 'p')
        {
            count += ft_printformat(format[i + 1], args);
            i += 2;
        }
        else if (format[i + 1] == '%')
        {
            write(1, "%", 1);
            i += 2;
            count++;
        }
        else
            i++;
    }

	va_end(args);
	return (count);
}