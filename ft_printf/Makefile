# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: rcalzas <rcalzas@student.42madrid.com>       +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/09/11 10:53:49 by rcalzas             #+#    #+#             #
#   Updated: 2026/10/08 11:01:30 by rcalzas            ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

#name of library
NAME = libprintf.a

#compilation and necesary flags
CC = cc
CFLAGS = -Wall -Wextra -Werror 

#src files and objecfiles
SRC = ft_printf.c \
	  ft_int_putnbr.c \
	  ft_int_putchar.c \


OBJ = $(SRC:.c=.o) 

#header
INCLUDE = ft_printf.h

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