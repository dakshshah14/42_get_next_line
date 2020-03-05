# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dashah <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 11:08:51 by dashah            #+#    #+#              #
#    Updated: 2020/02/29 14:51:16 by dashah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
FLAGS	= -Wall -Wextra -Werror
HEADER = .
FUNCS	=	*.c
OBJS = *.o

.PHONY:	clean fclean all re

all:	$(NAME)

$(NAME):	
	@echo " Creating .a and .o file..."
	@gcc $(FLAGS) -I $(HEADER) -c $(FUNCS)
	@ar -rcsv $(NAME) $(OBJS)

clean:
	@echo " Removing only OBJ files..."
	@/bin/rm -f $(OBJS)

fclean: clean
	@echo " Removing .a files..."
	@/bin/rm -f $(NAME)

re: fclean all
