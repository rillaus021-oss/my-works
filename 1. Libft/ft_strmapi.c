#include <stdlib.h>

size_t ft_strlen(const char *s);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *mapped;
    size_t i;

    if (!s || !f)
        return (NULL);
    mapped = malloc(ft_strlen(s) + 1);
    if (!mapped)
        return (NULL);
    i = 0;
    while (s[i])
    {
        mapped[i] = f((unsigned int)i, s[i]);
        i++;
    }
    mapped[i] = '\0';
    return (mapped);
}
