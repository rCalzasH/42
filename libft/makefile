#name of library
NAME = libft.a

#compilation and necesary flags
CC = cc
CFLAGS = -Wall -Wextra -Werror 

#src files and objecfiles
SRC = ft_bzero.c \ 
	  ft_isalpha.c \
	  ft_isalum.c \ 
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \ 
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

OBJ = $(SRC:c:=.o) 

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

