# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aessabir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 15:21:25 by aessabir          #+#    #+#              #
#    Updated: 2021/11/13 11:42:34 by aessabir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isascii.c \
        ft_isalnum.c \
        ft_isprint.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_memset.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strlcat.c \
        ft_strlcpy.c \
        ft_strlen.c \
        ft_strchr.c \
        ft_strncmp.c \
        ft_strnstr.c \
        ft_strrchr.c \
        ft_atoi.c \
        ft_toupper.c \
        ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_putendl_fd.c \
		ft_split.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_striteri.c \
		ft_strmapi.c

NAME= libft.a
OBJ= ${SRCS:.c=.o}

all :	$(NAME)
	
$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean : clean
		rm -f $(NAME)
re : fclean all
