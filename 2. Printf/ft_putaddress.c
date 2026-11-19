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