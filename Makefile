SRC = ft_strchr ft_strlen ft_putchar_fd \
      ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
      ft_strlcpy ft_strlcat ft_strdup ft_memset \
      ft_bzero ft_memcmp ft_memcpy ft_memmove \
      ft_isascii ft_isdigit ft_isalpha ft_isalnum \
      ft_isprint ft_toupper ft_tolower ft_atoi \
      ft_calloc ft_strjoin ft_strnstr ft_memccpy \
      ft_memchr ft_strncmp ft_substr ft_itoa \
      ft_split ft_strtrim ft_strrchr \
      additional/ft_strmap additional/ft_strmapi \
      additional/ft_striter additional/ft_striteri \
      additional/ft_putchar additional/ft_putstr \
      additional/ft_putnbr additional/ft_putendl

OBJ = $(SRC:=.o)
BOBJ = $(BSRC:=.o)
INC = libft.h
NAME = libft.a
AR = ar -rc
RM = rm -f
CC = gcc
FLAGS = -Wall -Wextra -Werror

%.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@ -I $(INC)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@$(ALERT) "$(GREEN)Compiled Successfully ^_^$(DEFAULT)"

clean:
	@$(RM) $(OBJ) $(BOBJ)
	@$(ALERT) "$(GREEN)Object files deleted ^_^$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@$(ALERT) "$(GREEN)libft.a deleted ^_^$(DEFAULT)"

re: re_alert fclean all

re_alert:
	@$(ALERT) "$(YELLOW)Restarting$(DEFAULT)"

.PHONY: clean fclean re