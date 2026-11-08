#include <stdlib.h>

size_t ft_strlen(const char *s);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t available;
    size_t i;
    char *sub;

    if (!s)
        return (NULL);
    available = ft_strlen(s);
    if (start >= available)
        len = 0;
    else if (len > available - start)
        len = available - start;
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}
