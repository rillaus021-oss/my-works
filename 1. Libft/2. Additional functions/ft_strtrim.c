#include <stdlib.h>
#include <stddef.h>

//importer ft_strlen

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    size_t end = ft_strlen(s1);
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    
    
}