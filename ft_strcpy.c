char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	source[] = "Bonjour 42";
	char	destination[] = "vide";
	char	*retour;

	printf("Source      : %s\n", source);
	printf("Destination : %s\n", destination);
    retour = ft_strcpy(destination, source);
	printf("Retour      : %s\n", retour);
	return (0);
}