# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cababou <cababou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/02 18:27:43 by cababou           #+#    #+#              #
#    Updated: 2018/02/17 05:39:31 by cababou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =		ft_atoi.c \
	 ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_lstnew.c \
	ft_lstdelone.c \
	ft_lstadd.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_strrev.c \
	ft_lstgetfirst.c \
	ft_lstgetlast.c \
	ft_lstdel.c \
	ft_lstget.c \
	ft_strsubuntilchar.c \
	ft_lstswap.c \
	listcontainer_new.c \
	listcontainer_addelement.c \
	listcontainer_removeelement.c \
	listcontainer_size.c

OBJ = $(SRC:.c=.o)

FLAG = -c -Wall -Werror -Wextra

HEADER =	libft.h

all :		$(NAME)

$(NAME) : $(OBJ)
			@ar rc $(NAME) $(OBJ)

%.o: %.c
			@gcc -c $< $(FLAG)

clean :
			@rm -rf $(OBJ)

fclean :	clean
			@rm -rf $(NAME)

re :		fclean all
