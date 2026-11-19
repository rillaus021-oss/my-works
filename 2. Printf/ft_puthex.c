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