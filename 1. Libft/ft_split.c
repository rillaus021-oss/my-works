/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scahamad <scahamad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:03:10 by scahamad          #+#    #+#             */
/*   Updated: 2026/11/05 19:03:12 by scahamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

static size_t count_words(char const *s, char c)
{
    size_t count;

    count = 0;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s)
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return (count);
}

static char *copy_word(char const *s, char c)
{
    size_t len;
    size_t i;
    char *word;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    word = malloc(len + 1);
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

static char **free_words(char **words, size_t count)
{
    while (count)
        free(words[--count]);
    free(words);
    return (NULL);
}

char **ft_split(char const *s, char c)
{
    char **words;
    size_t count;
    size_t i;

    if (!s)
        return (NULL);
    count = count_words(s, c);
    if (count >= SIZE_MAX / sizeof(char *))
        return (NULL);
    words = malloc((count + 1) * sizeof(char *));
    if (!words)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s)
        {
            words[i] = copy_word(s, c);
            if (!words[i])
                return (free_words(words, i));
            i++;
            while (*s && *s != c)
                s++;
        }
    }
    words[i] = NULL;
    return (words);
}
