#include <stdarg.h>
#include <stdio.h>

int	ft_sum(int count, ...)
{
	va_list	args;
	int		total;
	int		i;

	total = 0;
    i = 0;
    va_start(args, count);
    while (i < count)
    {
        total += va_arg(args, int);
        i++;
    }
    va_end(args);
    return (total);
}

int	main(void)
{
	printf("Résultat 1 : %d\n", ft_sum(3, 10, 20, 30));
	printf("Résultat 2 : %d\n", ft_sum(4, 1, 2, 3, 4));
	printf("Résultat 3 : %d\n", ft_sum(1, 42));
	printf("Résultat 4 : %d\n", ft_sum(0));
	return (0);
}