
#include "get_next_line.h"

static int	ft_append(char **stash, char *buffer)
{
	char	*joined;

	joined = ft_strjoin(*stash, buffer);
	if (!joined)
		return (0);
	free(*stash);
	*stash = joined;
	return (1);
}

static int	ft_fill_stash(int fd, char **stash)
{
	char	*buffer;
	ssize_t	n;

	buffer = malloc((size_t)GNL_READ_SIZE + 1);
	if (!buffer)
		return (0);
	n = 1;
	while (n > 0 && !ft_strchr(*stash, '\n'))
	{
		n = read(fd, buffer, GNL_READ_SIZE);
		if (n > 0)
		{
			buffer[n] = '\0';
			if (!ft_append(stash, buffer))
			{
				free(buffer);
				return (0);
			}
		}
	}
	free(buffer);
	return (n >= 0);
}

static void	ft_shift(char **stash, size_t start)
{
	size_t	i;

	i = 0;
	while ((*stash)[start + i])
	{
		(*stash)[i] = (*stash)[start + i];
		i++;
	}
	(*stash)[i] = '\0';
	if (i == 0)
	{
		free(*stash);
		*stash = NULL;
	}
}

static char	*ft_take_line(char **stash)
{
	char	*line;
	size_t	len;

	if (!*stash || !**stash)
		return (NULL);
	len = 0;
	while ((*stash)[len] && (*stash)[len] != '\n')
		len++;
	if ((*stash)[len] == '\n')
		len++;
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	ft_memcpy(line, *stash, len);
	line[len] = '\0';
	ft_shift(stash, len);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) < 0)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	if (!ft_fill_stash(fd, &stash))
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	line = ft_take_line(&stash);
	if (!line)
	{
		free(stash);
		stash = NULL;
	}
	return (line);
}
