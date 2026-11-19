#include "ft_printf.h"

int    ft_printformat(char format, va_list args)
{
    if (format == 'c')
        return (ft_putchar(va_arg(args, int)));
    if (format == 's')
        return (ft_putstr(va_arg(args, char *)));
    return (0);
}