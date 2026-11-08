#include <stdlib.h>

size_t ft_strlen(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);

static int in_set(char c, char const *set)
{
    while (*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t i;
    char *trimmed;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1);
    while (start < end && in_set(s1[start], set))
        start++;
    while (end > start && in_set(s1[end - 1], set))
        end--;
    trimmed = malloc(end - start + 1);
    if (!trimmed)
        return (NULL);
    i = 0;
    while (start < end)
        trimmed[i++] = s1[start++];
    trimmed[i] = '\0';
    return (trimmed);
}
