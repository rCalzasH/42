# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: rcalzas <rcalzas@student.42madrid.com>       +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/09/11 10:53:49 by rcalzas             #+#    #+#             #
#   Updated: 2026/09/18 10:03:45 by rcalzas            ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

#name of library
NAME = libft.a

#compilation and necesary flags
CC = cc
CFLAGS = -Wall -Wextra -Werror 

#src files and objecfiles
SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalpha.c \
	  ft_isalum.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memmove.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_strchr.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strrchr.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_strnstr.c \
	  ft_strjoin.c \
	  ft_substr.c \
	  ft_strtrim.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putend_fd.c \
	  ft_putnbr_fd.c \
	  ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstadd_back.c \
	  ft_lstclear.c \
	  ft_lstdelone.c \
	  ft_lstiter.c \
	  ft_lstlast.c \
	  ft_lstsize.c \
	  

OBJ = $(SRC:.c=.o) 

#header
INCLUDE = libft.h

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

