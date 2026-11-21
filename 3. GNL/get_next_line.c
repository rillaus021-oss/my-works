#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*tab;
	int		n;
	char	*temp;
	char	buffer[BUFFER_SIZE + 1];

	tab = malloc(1);
	if (!tab)
		return (NULL);
	tab[0] = '\0';
	n = 1;
	while (n > 0)
	{
		n = read(fd, buffer, BUFFER_SIZE);
		if (n <= 0)
			break ;
		buffer[n] = '\0';
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