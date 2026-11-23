#ifndef GET_NEXT_LINE.H
# define GET_NEXT_LINE.H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> 

size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_extract_line(char *buffer, int len);
char	*ft_extract_rest(char *buffer);
char	*ft_append_buffer(char *tab, char *buffer);
char	*ft_read_line(int fd, char *tab);

#endif