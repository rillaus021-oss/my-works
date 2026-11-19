
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_isformat(format[i + 1]))
		{
			count += ft_printformat(format[i + 1], &args);
			i += 2;
		}
		else if (format[i] == '%')
			i++;
		else
			count += ft_putchar(format[i++]);
	}
	va_end(args);
	return (count);
}