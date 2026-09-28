int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;

    while (s1[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Bonsoir";

	printf("Vrai strcmp : %d\n", strcmp(s1, s2));
	printf("ft_strcmp   : %d\n", ft_strcmp(s1, s2));

	printf("Cas identiques : %d\n", ft_strcmp("42", "42"));
	printf("Cas s1 plus long : %d\n", ft_strcmp("42abc", "42"));
	return (0);
}