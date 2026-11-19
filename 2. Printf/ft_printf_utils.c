#include "ft_printf.h"

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
    count += ft_putchar(c);
	return (count);
}

int ft_putchar(char c)
{
	return(write(1, &c, 1));
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
	count += ft_putchar(c);
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
	count += ft_putchar(c);
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

int	ft_putunsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_putunsigned(n / 10);
	c = (n % 10) + '0';
	count += ft_putchar(c);
    return (count);
}