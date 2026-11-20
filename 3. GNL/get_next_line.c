#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*tab;
	int		n;

	tab = malloc(2);
	if (!tab)
		return (NULL);
	n = read(fd, tab, 1);
	if (n <= 0)
	{
		free(tab);
		return (NULL);
	}
	tab[1] = '\0';
	return (tab);
}