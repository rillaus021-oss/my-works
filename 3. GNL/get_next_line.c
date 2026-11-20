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
	n = 1;
	while (n > 0 && i < 99)
	{
		n = read(fd, &tab[i], 1);
		if (n <= 0)
			break ;
		if (tab[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	if (i == 0 && n <= 0)
	{
		free(tab);
		return (NULL);
	}
	tab[i] = '\0';
	return (tab);
}