#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putunsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_putunsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
    count++;
    return (count);
}

int	ft_putnbr(int n)
{
	long	nb;
	char	c;
    int     count;

	nb = n;
    count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
        count++;
	}
	if (nb >= 10)
		count += ft_putnbr((int)(nb / 10));
	c = (nb % 10) + '0';
	write(1, &c, 1);
    count++;
    return (count);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
    if (!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
	while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int	ft_puthex(unsigned int n, char format)
{
	char	*base;
	int		count;
	char	c;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex(n / 16, format);
	c = base[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int ft_putaddress(unsigned long n)
{
    char    *base;
    char    c;
    int     count;
    
    base = "0123456789abcdef";
    count = 0;
    if (n >= 16)
        count += ft_putaddress(n/16);
    c = base[n % 16];
    write(1, &c, 1);
	count++;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	char	c;
    int     n;
    unsigned int    u;
    int	count;
    char    *str;
    void    *ptr;

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
            write(1, &c, 1);
            i += 2;
            count++;
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
            ptr = va_arg(args, void *);
            if (!ptr)
            {
                write(1, "(nil)", 5);
                count += 5;
            }
            else
            {
                count += write(1, "0x", 2);
                count += ft_putaddress((unsigned long)ptr);
            }
            i += 2;
        }
        else
            i++;
    }

	va_end(args);
	return (count);
}