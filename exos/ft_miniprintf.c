#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putunsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	/* À toi de compléter */
}

int	ft_putnbr(int n)
{
	long	nb;
	char	c;
    int     count;
    int     n;

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
	while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	char	c;
    int	count;
    char    *str;

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
        else if (format[i + 1] == 'd' || format[i + 1] == 'i')
        {
            n = va_arg(args, int);
            count += ft_putnbr(n);
            i += 2;
        }
        else
            i++;
    }

	va_end(args);
	return (count);
}

int	main(void)
{
	int	result;

	result = ft_printf("Progression : 100%%\n");
	printf("Nombre de caractères : %d\n", result);
	return (0);
}