/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:55:47 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/13 21:44:20 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	tab = malloc(end - start + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (start < end)
		tab[i++] = s1[start++];
	tab[i] = '\0';
	return (tab);
}

/*
int main(void)
{
    char *s1;
    char *set;
    char *result;

    // Test 1 : suppression d'espaces et de ponctuations au début et à la fin
    s1 = "   Hello, 42 World!   ";
    set = " H!";
    result = ft_strtrim(s1, set);
    printf("Test 1 - Original: '%s'\n", s1);
    printf("Test 1 - Trimmed : '%s' (Attendu: 'ello, 42 World')\n\n", result);
    free(result);

    // Test 2 : chaîne contenant uniquement des caractères du set
    s1 = "xxxxxx";
    set = "x";
    result = ft_strtrim(s1, set);
    printf("Test 2 - Original: '%s'\n", s1);
    printf("Test 2 - Trimmed : '%s' (Attendu: '')\n\n", result);
    free(result);

    // Test 3 : chaîne sans caractères du set aux extrémités
    s1 = "NoTrimHere";
    set = "xyz";
    result = ft_strtrim(s1, set);
    printf("Test 3 - Original: '%s'\n", s1);
    printf("Test 3 - Trimmed : '%s' (Attendu: 'NoTrimHere')\n\n", result);
    free(result);

    return (0);
}*/
