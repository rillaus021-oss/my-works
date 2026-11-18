
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (size != 0 && n > (size_t)-1 / size)
		return (NULL);
	p = malloc(n * size + (n == 0 || size == 0));
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}
