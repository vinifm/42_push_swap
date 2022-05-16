# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 16:11:12 by viferrei          #+#    #+#              #
#    Updated: 2022/05/16 15:24:04 by viferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRCDIR		= ./srcs/
OBJDIR		= ./objs/

SRC			= push_swap.c
OBJ			= $(addprefix $(OBJDIR), $(notdir $(SRC:.c=.o)))

all: $(NAME)

$(OBJDIR)%.o:	$(SRCDIR)%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJDIR)
	make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
