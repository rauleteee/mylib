
<h1 align="center">
	LIBFT 42 Madrid
</h1>

### DESCRIPTION
LIBFT is my very first project in 42 Madrid Academy, which is based on replicated functions in C language. Currently, it is not finished yet. Although, you can check it in order to understand how I have dealt with these functions' replication. I will be uploading improvements on my code, while I am studying for university exams.

### LIST OF IMPLEMENTED FUNCTIONS
 * int				ft_atoi(const char *str);
 * int				ft_isdigit(int c);
 * int				ft_isalnum(int c);
 * int				ft_isalpha(int c);
 * int				ft_isascii(int c);
 * int				ft_isprint(int c);
 * void			*ft_memset(void *s, int c, size_t n);
 * char			*ft_strchr(char *s, int c);
 * size_t			ft_strlcat(char *dest, const char *src, size_t size);
 * size_t			ft_strlcpy(char *dest, char *src, size_t size);
 * size_t			ft_strlen(const char *str);
 * int				ft_strncmp(const char *s1, const char *s2, size_t n);
 * char			*ft_strnstr(const char *str, const char *to_find, size_t n);
 * char			*ft_strrchr(const char *s, int c);
 * int				ft_tolower(int	c);
 * int				ft_toupper(int	c);
 * void			ft_bzero(void *s, size_t n);
 * void			*ft_memmove(void *dest, const void *src, size_t n);
 * void			*ft_memcpy(void *dest, const void *src, size_t n);
 * int				ft_memcmp(const void *s1, const void *s2, size_t n);
 * void			*ft_memchr(const void *s, int c, size_t n);
 * void			*ft_calloc(size_t nmemb, size_t size);
 * char			*ft_strdup(const char *s);
 * char			*ft_substr(char const *s, unsigned int start, size_t len);
 * char 			*ft_strjoin(char const *s1, char const *s2);
 * void			ft_putchar_fd(char c, int fd);
 * void			ft_putstr_fd(char *s, int fd);
 * void			ft_putendl_fd(char *s, int fd);
 * void			ft_putnbr_fd(int n, int fd);
 * char 			*ft_itoa(int n);
 * void 			ft_striteri(char *s, void (*f)(unsigned int, char*));
 * char 			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
 * char			*ft_strtrim(char const *s1, char const *set);
 * char			**ft_split(char const *s, char c);
 * t_list			*ft_lstnew(void *content);
 * void 			ft_lstadd_front(t_list **lst, t_list *new);
 * int 			ft_lstsize(t_list	*lst);
 * t_list			*ft_lstlast(t_list	*lst);
 * void 			ft_lstadd_back(t_list **lst, t_list *new);
 * void 			ft_lstdelone(t_list *lst, void (*del)(void*));
 * void 			ft_lstclear(t_list **lst, void (*del)(void*));
 * void 			ft_lstiter(t_list *lst, void (*f)(void *));
 * t_list 			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

 ### MAKEFILE's FUNCTIONS
 *  _make all_ : creates .o files and checks flags  ( -Wall -Wextra -Werror -c )
 * _make clean_ : removes .o files.
 * _make fclean_ : make clean + removes .a file.
 * _make re_ : make all + make clean.
 * _make flags_ : only for checking flags.


 ### NORMINETTE's GRADE
 > _Yet to be determined_

