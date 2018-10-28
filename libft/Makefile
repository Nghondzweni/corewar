# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/02 20:03:01 by tnghondz          #+#    #+#              #
#    Updated: 2018/06/02 20:05:56 by tnghondz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -c -Wextra -Wall -Werror

SRCS = ft_memset.c\
	   ft_bzero.c\
	   ft_memcpy.c\
	   ft_memcmp.c\
	   ft_memccpy.c\
	   ft_memmove.c\
	   ft_memchr.c\
	   ft_strlen.c\
	   ft_strcpy.c\
	   ft_strncpy.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strcmp.c\
	   ft_strcat.c\
	   ft_strstr.c\
	   ft_strcat.c\
	   ft_strncat.c\
	   ft_strlcat.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strcmp.c\
	   ft_strncmp.c\
	   ft_strdup.c\
	   ft_strnstr.c\
	   ft_atoi.c\
	   ft_memdel.c\
	   ft_memalloc.c\
	   ft_strdel.c\
	   ft_strclr.c\
	   ft_strsub.c\
	   ft_strnew.c\
	   ft_strequ.c\
	   ft_itoa.c\
	   ft_strsplit.c\
	   ft_strnequ.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_strsub.c\
	   ft_striter.c\
	   ft_striteri.c\
	   ft_putnbr.c\
	   ft_putnbr_fd.c\
	   ft_strmap.c\
	   ft_strmapi.c\
	   ft_putchar.c\
	   ft_putchar_fd.c\
	   ft_putstr.c\
	   ft_putstr_fd.c\
	   ft_putendl.c\
	   ft_putendl_fd.c\
	   ft_printbits.c\
	   ft_printbits_fd.c\
	   ft_itoa_base.c\
	   get_next_line.c


LIB = ar rc

RANLIB = ranlib

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRCS)
	@$(LIB) $(NAME) $(OBJ)
	@$(RANLIB) $(NAME)

clean: 
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all
