#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    if (!str)
        return (NULL);
    while (str[i])
        i++;
    return (i);
}