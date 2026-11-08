#include <stddef.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (big[i] && i < len)
    {
        j = 0;
        while (i + j < len && big[i + j] != '\0' && big[i + j] == little[j])
            j++;
        if (little[j] == '\0')
            return ((char *)&big[i]);
        i++;
    }
    return (NULL);
}

int	main(void)
{
	printf("1 : %s\n", ft_strnstr("Bonjour", "jour", 7));
	printf("2 : %p\n", (void *)ft_strnstr("Bonjour", "jour", 5));
	printf("3 : %s\n", ft_strnstr("Bonjour", "", 0));
	printf("4 : %p\n", (void *)ft_strnstr("Bonjour", "xyz", 7));
	return (0);
}