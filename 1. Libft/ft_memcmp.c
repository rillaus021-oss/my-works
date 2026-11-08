#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a;
    const unsigned char *b;
    size_t i;

    a = (const unsigned char *)s1;
    b = (const unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (a[i] != b[i])
            return (a[i] - b[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    printf("%d\n", ft_memcmp("ABC", "ABC", 3));
    printf("%d\n", ft_memcmp("ABC", "ABD", 3));
    printf("%d\n", ft_memcmp("ABD", "ABC", 3));
    printf("%d\n", ft_memcmp("ABC", "XYZ", 0));
    return (0);
}