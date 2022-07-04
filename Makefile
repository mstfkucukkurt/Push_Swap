# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 17:04:19 by mkucukku          #+#    #+#              #
#    Updated: 2022/06/30 18:03:14 by mkucukku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFILES = ft_lst_functions.c main.c \
		./opert/ft_swap_op.c ./opert/ft_push_op.c ./opert/ft_rot_op.c ./opert/ft_rev_rot_op.c \
		./small/ft_sort_three.c push_swap.c ./small/ft_sort_four.c ./small/ft_sort_five.c \
		./small/ft_push_small.c ft_checks.c

OBJECTS = $(CFILES:.c=.o)

LIBFT = ./libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

all:	$(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) -o $(NAME)
	@echo $(Y)Compiled[$(NAME)]...$(X)

clean:
	@rm -f $(OBJECTS)
	@echo $(Y)Deleted[$(OBJECTS)]...$(X)

fclean:	clean
	@rm -f $(NAME)
	@echo $(Y)Deleted[$(NAME)]...$(X)

re: fclean all
