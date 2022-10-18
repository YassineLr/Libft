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

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}
	
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re