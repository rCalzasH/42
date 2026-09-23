# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: rcalzas <rcalzas@student.42madrid.com>       +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/09/23 15:56:53 by rcalzas             #+#    #+#             #
#   Updated: 2026/09/23 15:59:52 by rcalzas            ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

#name of library
NAME = libft.a

#compilation and necesary flags
CC = cc
CFLAGS = -Wall -Wextra -Werror 

#src files and objecfiles
SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c \
OBJ = $(SRC:.c=.o) 

#header
INCLUDE = includes/libft.h

AR = ar rcs
RM = rm -f 

#all
all: $(NAME)

#create library
$(NAME): $(OBJ)
	$(AR) $@ $^

#transforms .c .o
%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c -o $@ $<

#Remove *.o
clean:
	$(RM) $(OBJ)

#remove library 
fclean: clean
	$(RM) $(NAME)

re: fclean all

#phnoy do diff bewtween files and rules
.PHONY: all clean fclean re