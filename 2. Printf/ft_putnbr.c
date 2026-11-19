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