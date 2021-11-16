#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int				ft_atoi(const char *str);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strchr(char *s, int c);
size_t			ft_strlcat(char *dest, char *src, size_t size);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int	c);
int				ft_toupper(int	c);

#endif
