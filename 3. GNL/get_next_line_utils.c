#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    if (!str)
        return (0);
    while (str[i])
        i++;
    return (i);
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
