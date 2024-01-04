# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muribe-l <muribe-l@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 15:15:27 by muribe-l          #+#    #+#              #
#    Updated: 2024/01/04 14:26:25 by muribe-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

NAME = libft.a
SOURCES = ft_calloc.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlen.c ft_tolower.c ft_atoi.c \
ft_isascii.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_toupper.c ft_bzero.c \
ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strnstr.c ft_isalnum.c ft_isprint.c \
ft_memmove.c ft_strlcpy.c ft_strrchr.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c 

BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c

BONUSOBJ = $(BONUSSRC:.c=.o)

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJ)


%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus