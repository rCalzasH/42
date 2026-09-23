# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: rcalzas <rcalzas@student.42madrid.com>       +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/09/23 16:12:47 by rcalzas             #+#    #+#             #
#   Updated: 2026/09/23 16:12:52 by rcalzas            ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
SRC		= ft_display_file.c
OBJ		= $(SRC:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re