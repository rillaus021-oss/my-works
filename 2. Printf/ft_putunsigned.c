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