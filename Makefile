SRCS = ft_strchr.c ft_strlen.c ft_putchar_fd.c \
      ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
      ft_strlcpy.c ft_strlcat.c ft_strdup.c ft_memset.c \
      ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_isascii.c ft_isdigit.c ft_isalpha.c ft_isalnum.c \
      ft_isprint.c ft_atoi.c ft_memcmp.c \
      ft_calloc.c ft_strjoin.c ft_strnstr.c \
      ft_memchr.c ft_strncmp.c ft_substr.c \
      ft_itoa.c ft_strtrim.c ft_strrchr.c ft_striteri.c \
      ft_strmapi.c ft_tolower.c ft_toupper.c \
      ft_split.c 

BSRC = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c \
	ft_lstdelone.c ft_lstclear.c ft_lstlast.c \
      ft_lstsize.c ft_lstiter.c ft_lstmap.c

OBJS = ${SRCS:.c=.o}

BOBJ = ${BSRC:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

%.o:%.c
	@${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}
	
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: ${NAME} ${BOBJ}
	ar rcs ${NAME} ${BOBJ}

clean:
	rm -rf ${OBJS} ${BOBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re