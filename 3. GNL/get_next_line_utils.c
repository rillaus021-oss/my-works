
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	a;
	size_t	b;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	if (a == (size_t)-1 || a > (size_t)-1 - b - 1)
		return (NULL);
	result = malloc(a + b + 1);
	if (!result)
		return (NULL);
	if (s1)
		ft_memcpy(result, s1, a);
	ft_memcpy(result + a, s2, b + 1);
	return (result);
}
