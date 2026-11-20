#include "get_next_line.h"

char	*get_next_line(int fd)
{
    char *tab;
    int n;

    tab = malloc(2);
    if (!tab)
        return (NULL);
    n = read(fd, buffer, 1);
    if (!n)
        return (-1);
    *tab = n;
    [*tab++] = '\0';
    return (tab);
}