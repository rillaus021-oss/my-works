
#include "ft_printf.h"

int	ft_putaddress(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_putaddress(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_puthex(unsigned int n, char format)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, format);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_printptr(void *ptr)
{
	int	count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += ft_putaddress((unsigned long)ptr);
	return (count);
}
