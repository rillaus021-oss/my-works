#include <stdlib.h>

char *ft_itoa(int n)
{
    unsigned int magnitude;
    unsigned int temp;
    size_t len;
    char *str;

    magnitude = (unsigned int)n;
    if (n < 0)
        magnitude = 0u - magnitude;
    temp = magnitude;
    len = 1 + (n < 0);
    while (temp >= 10)
    {
        temp /= 10;
        len++;
    }
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    while (len > (size_t)(n < 0))
    {
        str[--len] = '0' + magnitude % 10;
        magnitude /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
}
