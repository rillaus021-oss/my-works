#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    size_t  total;
    void  *tab;

    if (size != 0 && count > (SIZE_MAX / size))
        return (NULL);
    total = count * size;
    tab = malloc(total);
	if (tab == NULL)
		return (NULL);
    ft_bzero(tab, total);
    return (tab);
}

int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_calloc(4, sizeof(int));
	if (tab == NULL)
		return (1);
	i = 0;
	while (i < 4)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}