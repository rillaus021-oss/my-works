#include "ft_printf.h"

int    ft_printformat(char format, va_list args)
{
    if (format == 'c')
        return (ft_putchar(va_arg(args, int)));
    if (format == 's')
        return (ft_putstr(va_arg(args, char *)));
    if (format == 'd' || format == 'i')
        return (ft_putnbr(va_arg(args, int)));
    if (format == 'u')
        return (ft_putunsigned(va_arg(args, unsigned int)));
    if (format == 'x' || format == 'X')
        return (ft_puthex(va_arg(args, unsigned int), format));
    if (format == 'p')
        return (ft_printptr(va_arg(args, void *)));
    if (format == 'p')
        return (ft_printptr(va_arg(args, void *)));
    return (0);
}