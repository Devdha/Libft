# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dha <dha@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 20:59:53 by dha               #+#    #+#              #
#    Updated: 2021/11/29 20:52:10 by dha              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isascii.c ft_putchar_fd.c ft_strchr.c ft_strlen.c ft_substr.c ft_atoi.c \
	ft_isdigit.c ft_memchr.c ft_strdup.c ft_strmapi.c ft_tolower.c ft_bzero.c ft_isprint.c \
	ft_memcmp.c ft_putendl_fd.c  ft_striteri.c ft_strncmp.c ft_toupper.c ft_calloc.c \
	ft_itoa.c ft_memcpy.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c ft_isalnum.c ft_memmove.c \
	ft_putstr_fd.c ft_strlcat.c ft_strrchr.c ft_isalpha.c ft_memset.c ft_split.c \
	ft_strlcpy.c ft_strtrim.c
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
TARGET = libft.a

ifdef WITH_BONUS
	OBJ_FILES = $(OBJS) $(OBJS_BONUS)
else
	OBJ_FILES = $(OBJS)
endif

all : $(TARGET)

$(TARGET) : $(OBJ_FILES)
	ar rcs $@ $^

bonus :
	make WITH_BONUS=1 all

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY : clean fclean re all bonus