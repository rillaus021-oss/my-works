/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 18:28:44 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/24 18:28:51 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*tab;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	tab = malloc(len + 1);
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	a;
	size_t	b;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	if (a > (size_t)-1 - b - 1)
		return (NULL);
	out = malloc(a + b + 1);
	if (!out)
		return (NULL);
	ft_memcpy(out, s1, a);
	ft_memcpy(out + a, s2, b + 1);
	return (out);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_extract_line(char *buffer, int len)
{
	int		i;
	int		j;
	char	*tab;

	if (!buffer || len <= 0)
		return (NULL);
	i = 0;
	while (i < len && buffer[i] != '\n')
		i++;
	if (i < len && buffer[i] == '\n')
		i++;
	tab = malloc(i + 1);
	if (!tab)
		return (NULL);
	j = 0;
	while (j < i)
	{
		tab[j] = buffer[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	*ft_extract_rest(char *buffer)
{
    char    *start;
    char    *tab;

    if (!buffer)
        return (NULL);
    start = ft_strchr(buffer, '\n');
    if (!start)
        return (NULL); 
    start++;
    if (*start == '\0')
        return (NULL);
    tab = ft_substr(start, 0, (size_t)(ft_strlen(start)));
    if (!tab)
        return (NULL);
    return (tab);
}

char	*ft_append_buffer(char *tab, char *buffer)
{
    char    *new;

    if (!tab || !buffer)
        return (NULL);
    new = ft_strjoin(tab, buffer);
    if (!new)
    {
        free(tab);
        return (NULL);
    }
    free(tab);
    return (new);
}

char	*ft_read_line(int fd, char *tab)
{
	char	b_size[BUFFER_SIZE + 1];
	int		lect;
	char	*new;

    while (!ft_strchr(tab, '\n'))
    {
        lect = read(fd, b_size, BUFFER_SIZE);
        if (lect < 0)
        {
            free(tab);
            return (NULL);
        }
        else if (lect == 0)
            break;
        b_size[lect] = '\0';
        new = ft_append_buffer(tab, b_size);
        if (!new)
            return (NULL);
        tab = new;
    }
	return (tab);
}

char    *get_next_line(int fd)
{
    static char *reste;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    if (!reste)
        reste = malloc(1);
    if (!reste)
        return (NULL);
    reste = '\0';
}