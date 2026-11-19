#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
    int	count;

	i = 0;
    count = 0;
	va_start(args, format);

	while (format[i])
    {
        if (format[i] != '%')
        {
            count += write(1, &format[i], 1);
            i++;
        }
        else if (ft_isformat(format[i + 1]))
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