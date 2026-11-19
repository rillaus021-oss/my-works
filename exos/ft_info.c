#include <stdarg.h>
#include <stdio.h>

void	ft_info(int count, ...)
{
	va_list	args;
	char	*name;
	int		age;
	char	letter;
    va_start(args, count);
	name = va_arg(args, char *);
    age = va_arg(args, int);
    letter = va_arg(args, int);
    va_end(args);
    printf("Nom : %s\n", name);
    printf("Age : %i\n", age);
    printf("Lettre : %c\n", letter);
}

int	main(void)
{
	ft_info(3, "Alice", 25, 'A');
	return (0);
}