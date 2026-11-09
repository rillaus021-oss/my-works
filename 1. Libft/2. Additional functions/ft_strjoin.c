#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t  s1_len;
    size_t  s2_len;
    size_t  i;
    size_t  j;
    char    *tab;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    tab = malloc(s1_len + s2_len + 1);
    if (!tab)
        return (NULL);
    i = 0;
    j = 0;
    while (i < s1_len)
    {
        tab[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        tab[i + j] = s2[j];
        j++;
    }
    tab[i + j] = '\0';
    return (tab);
}


int	main(void)
{
	char	*result;

	result = ft_strjoin("Bon", "jour");
	if (!result)
		return (1);
	printf("Résultat : %s\n", result);
	free(result);
	return (0);
}