#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*tab;
	int		n;
	int		i;

	i = 0;
	tab = malloc(100);
	if (!tab)
		return (NULL);
	while (n > 0 && c != '\n')
	{
		n = read(fd, &tab[i], 1);
		i++;
	}
	if (n <= 0)
	{
		free(tab);
		return (NULL);
	}
	tab[i] = '\0';
	return (tab);
}