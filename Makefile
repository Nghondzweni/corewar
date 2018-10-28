# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 12:53:37 by tnghondz          #+#    #+#              #
#    Updated: 2018/09/09 16:06:55 by tnghondz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = asm
NAME2 = corewar

RCS_DIR		= ./resources

SRCS1_ASM	:= ./ASSEMBLER/srcs/read.c
SRCS1_ASM	+= ./ASSEMBLER/srcs/asm.c
SRCS1_ASM	+= ./ASSEMBLER/srcs/error_check.c
SRCS1_ASM	+= ./ASSEMBLER/srcs/write.c
SRCS1_ASM	+= ./ASSEMBLER/srcs/conversion.c


LIBFT_DIR	= ./libft

FLAGS = -Wextra -Werror -Wall

CC = gcc

all: $(NAME1)
$(NAME1):
	$(MAKE) -C $(LIBFT_DIR) all
	$(CC) -o $(NAME1) $(FLAGS) $(SRCS1_ASM) libft/libft.a
	clear

clean:
	@make clean -C libft
fclean:
	@make fclean -C libft
	@rm -f $(NAME1)

re:	fclean all