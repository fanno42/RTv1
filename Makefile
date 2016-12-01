# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fanno <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/30 13:17:59 by fanno             #+#    #+#              #
#    Updated: 2016/11/30 13:32:48 by fanno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RTv1

FUNC = ft_display ft_parse ft_plan ft_vectors1 ft_vectors2 main

SRC = $(addprefix sources/, $(addsuffix .c, $(FUNC)))

OBJ = $(addprefix sources/, $(addsuffix .o, $(FUNC)))

CC = clang

FLAGS = -Wall -Werror -Wextra -Ofast

NAME_TAR = transfer.tar

ILL = 'free'

all: lib $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $@ $^ libft/includes/libft.a -lmlx -framework OpenGL -framework AppKit

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $<

lib:
	@make -C libft/

clean:
	@rm -rf $(OBJ)
	@echo "\033[91;1mObject deleted\003[0m";

lclean:
	@make -C libft/ clean

aclean : clean lclean

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ clean
	@echo "\033[91;1mBinary deleted\033[0m";

lfclean:
	@make -C libft/ fclean

afclean: fclean lfclean

re: fclean all

relib: lfclean lib

rea: relib re

rego: all
	@./RTv1

tar: fclean
	@echo "\033[92;1mProject compressed\033[0m";
	@tar -cf $(NAME_TAR) $(SRC) Makefile $(addsuffix .h, $(NAME))

ill:
	cat $(SRC) | grep -n $(ILL)

norme:
	norminette $(SRC) includes/RTv1.h

normelib:
	@make -C libft/ norme
