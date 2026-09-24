# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: rcalzas <rcalzas@student.42madrid.com>       +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/09/23 15:56:53 by rcalzas             #+#    #+#             #
#   Updated: 2026/09/23 15:59:52 by rcalzas            ###   ########.fr       #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
 
CC = cc
CFLAGS = -Wall -Wextra -Werror
 
AR = ar
ARFLAGS = rcs
 
RM = rm -f
 
SRCS = srcs/ft_putchar.c \
       srcs/ft_putstr.c \
       srcs/ft_strcmp.c \
       srcs/ft_strlen.c \
       srcs/ft_swap.c
 
OBJS = $(SRCS:.c=.o)
 
all: $(NAME)
 
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
 
srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@
 
clean:
	$(RM) $(OBJS)
 
fclean: clean
	$(RM) $(NAME)
 
re: fclean all
 
.PHONY: all clean fclean re
