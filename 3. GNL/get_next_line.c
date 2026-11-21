#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*tab;
	int		n;
	int		i;
	char	*temp;
	char	buffer[2];

	i = 0;
	tab = malloc(1);
	if (!tab)
		return (NULL);
	tab[0] = '\0';
	n = 1;
	while (n > 0)
	{
		n = read(fd, buffer, 1);
		if (n <= 0)
			break ;
		buffer[1] = '\0';
		temp = ft_strjoin(tab, buffer);
		free(tab);
		if (!temp)
			return (NULL);
		tab = temp;
		if (buffer[0] == '\n')
			break ;
	}
	if (n < 0 || (n == 0 && tab[0] == '\0'))
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}