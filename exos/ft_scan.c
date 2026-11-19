#include <stdio.h>

void	ft_scan(const char *format)
{
	int	i;

	i = 0;
	while (format[i])
    {
        if (format[i] != '%')
        {
            printf("Caractère : %c\n", format[i]);
            i++;
        }
        else if (format[i + 1] != '\0')
        {
            printf("Conversion détectée : %c\n", format[i+1]);
            i +=2;
        }
        else
            i++;
    }
}

int	main(void)
{
	ft_scan("Salut %s, tu as %d ans !");
	return (0);
}