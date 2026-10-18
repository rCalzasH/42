# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: rcalzas <rcalzas@student.42madrid.com>       +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/09/11 10:53:49 by rcalzas             #+#    #+#             #
#   Updated: 2026/10/18 11:02:37 by rcalzas            ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: rcalzas <rcalzas@student.42madrid.com>       +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/09/11 10:53:49 by rcalzas             #+#    #+#             #
#   Updated: 2026/10/18 11:01:30 by rcalzas            ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

# Name of library
NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror 


SRC = ft_printf.c \
	  ft_int_putnbr_base.c \
	  ft_int_putchar.c \
	  ft_int_putstr.c \
	  ft_int_putptr.c

OBJ = $(SRC:.c=.o) 


INCLUDE = ft_printf.h

AR = ar rcs
RM = rm -f 

# all
all: $(NAME)

# create library
$(NAME): $(OBJ)
	$(AR) $@ $^

# transforms .c .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	$(RM) $(OBJ)

# remove library 
fclean: clean
	$(RM) $(NAME)

re: fclean all

# phony to do diff between files and rules
.PHONY: all clean fclean re