/* ************************************************************************** */

#include "libft.h"

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
