# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewallner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 16:30:18 by ewallner          #+#    #+#              #
#    Updated: 2016/11/17 18:23:27 by ewallner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
HEAD = src/srcheader.h
FLAGS =  -Werror -Wextra -Wall
SRC = ft_putchar.c ft_putchar_fd.c ft_putstr_fd.c ft_putstr.c ft_strlen.c \

OBJ = $(SRC:%.c=%.o)

$(NAME):
	CC -o $(NAME) $(FLAGS) $(SRC) -I $(HEAD) -L $(LIB) -lft

all: $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

