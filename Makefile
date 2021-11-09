# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 20:21:26 by ripereir          #+#    #+#              #
#    Updated: 2021/11/09 01:06:24 by ripereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strdup.c \
		ft_split.c
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(SRC:.c=.o)
	ar rc $(NAME) $(SRC:.c=.o)
	ranlib $(NAME)

clean:
	$(RM)   $(SRC:.c=.o)  $(BONUS:=.o)
fclean: clean
	$(RM)   $(NAME)
re:     fclean  $(NAME)
bonus:  $(SRC:=.o)      $(BONUS:=.o)
	ar rc $(NAME) $(SRC:=.o)        $(BONUS:=.o)
	ranlib $(NAME)
norm : 
	norminette -R CheckForbiddenSourceHeader *.c