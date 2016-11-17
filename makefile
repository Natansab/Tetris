# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewallner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 16:30:18 by ewallner          #+#    #+#              #
#    Updated: 2016/11/17 19:56:03 by ewallner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit 
LIBFT = libft.a
GCC_FLAGS = -Wall -Werror -Wextra
CC = gcc $(GCC_FLAGS)
RM = rm -rf

SRCS = ft_unittest.c \
	   ft_errormsg.c \
	   ft_filetostr.c \

SRCDIR = ./src/
OBJDIR = ./obj/
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) -Llibft $(OBJS) -lft -o $(NAME)

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) -o $@ -c $^

$(LIBFT):
	@make -C ./libft/

clean:
	@$(RM) $(OBJS)
	@make clean -C ./libft/

fclean: clean
	@$(RM) $(LIBFT)
	@$(RM) $(NAME)
	@make fclean -C ./libft/

re: fclean all
