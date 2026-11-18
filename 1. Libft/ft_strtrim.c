
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	tab = malloc(end - start + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (start < end)
		tab[i++] = s1[start++];
	tab[i] = '\0';
	return (tab);
}
