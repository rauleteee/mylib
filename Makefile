NAME = libft.a
CC = gcc 
FLAGS = -Wall -Wextra -Werror -c 
SRCS = ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c 

OBJS=$(SRCS:.c=.o)


all : $(NAME)

%o : %c 
	${CC} ${FLAGS} $< -o $@


$(NAME) : $(OBJS)
			ar rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f ${NAME}

re : fclean all 

.PHONY = all fclean clean re 
