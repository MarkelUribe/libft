# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muribe-l <muribe-l@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 15:15:27 by muribe-l          #+#    #+#              #
#    Updated: 2024/01/03 20:54:26 by muribe-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ft_calloc.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlen.c ft_tolower.c ft_atoi.c \
ft_isascii.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_toupper.c ft_bzero.c \
ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strnstr.c ft_isalnum.c ft_isprint.c \
ft_memmove.c ft_strlcpy.c ft_strrchr.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?
	make clean


%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re