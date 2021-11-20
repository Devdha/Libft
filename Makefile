SRCS = ft_isalpha.c ft_memchr.c  ft_split.c   ft_strlcpy.c ft_strtrim.c ft_atoi.c    ft_isascii.c ft_memcmp.c  ft_strchr.c  ft_strlen.c  ft_substr.c ft_bzero.c   ft_isdigit.c ft_memcpy.c  ft_strdup.c  ft_strncmp.c ft_tolower.c ft_calloc.c  ft_isprint.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_itoa.c    ft_memset.c  ft_strlcat.c ft_strrchr.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
OBJS = ${SRCS:.c=.o}
TARGET = libft.a

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar cr $@ $(OBJS)

%.o : %.c
	${CC} ${CFLAGS} $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY : clean fclean re $(TARGET) all