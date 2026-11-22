#include "get_next_line.h"

static char	*ft_extract_rest(char *str)
{
	char	*start;
	char	*rest;
	size_t	len;

	if (!str)
		return (NULL);
	start = ft_strchr(str, '\n');
	if (!start)
		return (NULL);
	start++;
	if (*start == '\0')
		return (NULL);
	len = ft_strlen(start);
	rest = malloc(len + 1);
	if (!rest)
		return (NULL);
	ft_memcpy(rest, start, len);
	rest[len] = '\0';
	return (rest);
}

char	*get_next_line(int fd)
{
	char	*tab;
	int		n;
	char	*temp;
	char	buffer[BUFFER_SIZE + 1];
	static char	*reste;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	if (reste)
	{
		tab = reste;
		reste = NULL;
	}
	else
	{
		tab = malloc(1);
		if (!tab)
			return (NULL);
		tab[0] = '\0';
	}
	n = 1;
	while (n > 0 && !ft_strchr(tab, '\n'))
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
	}
	if (n < 0 || tab[0] == '\0')
	{
		free(tab);
		reste = NULL;
		return (NULL);
	}
	temp = ft_extract_line(tab);
	if (!temp)
	{
		free(tab);
		return (NULL);
	}
	reste = ft_extract_rest(tab);
	free(tab);
	return (temp);
}