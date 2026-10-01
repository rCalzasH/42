*This project has been created as part of the 42 curriculum by rcalzas.*

# Libft

## Description

**Libft** is my very first own C library. The goal of the project is to understand how the standard C functions work by re-implementing them from scratch, and to build a personal toolbox of general-purpose functions that will be reused in future 42 projects.

The library is compiled into a static archive, `libft.a`, and is split into three parts:

1. **Libc functions**: re-implementations of standard functions, with the same prototypes and behaviour as the originals but prefixed with `ft_`.
2. **Additional functions**: utilities that are either not part of the libc or exist in a different form (string manipulation, number conversion, file descriptor output).
3. **Linked list functions**: a small set of functions to manipulate singly linked lists built on the `t_list` structure.

### Library overview

**Part 1 - Libc functions**

| Category | Functions |
|---|---|
| Character classification | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String handling | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory handling | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

`ft_calloc` follows the subject rule: if `nmemb` or `size` is 0, it returns a unique pointer that can be successfully passed to `free()`.

**Part 2 - Additional functions**

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of `s` starting at index `start`, with a maximum length `len`. |
| `ft_strjoin` | Returns a new string resulting from the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Returns a copy of `s1` with the characters in `set` removed from the beginning and the end. |
| `ft_split` | Splits `s` using the character `c` as delimiter and returns a NULL-terminated array of strings. |
| `ft_itoa` | Converts an integer (including negative numbers) into a string. |
| `ft_strmapi` | Applies `f` to each character (with its index) and returns a new string with the results. |
| `ft_striteri` | Applies `f` to each character (with its index), passing it by address so it can be modified. |
| `ft_putchar_fd` | Writes a character to the given file descriptor. |
| `ft_putstr_fd` | Writes a string to the given file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to the given file descriptor. |
| `ft_putnbr_fd` | Writes an integer to the given file descriptor. |

**Part 3 - Linked list**

The list is based on the following structure, declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a node's content with `del`, then frees the node itself. |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to NULL. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content, freeing everything on allocation failure. |

### Technical constraints

- Written in C, in accordance with the 42 Norm.
- Compiled with `cc -Wall -Wextra -Werror`.
- No global variables; helper functions are declared `static`.
- The library is created with the `ar` command (`libtool` is forbidden).
- No memory leaks and no unexpected crashes (except for undefined behaviour).

## Instructions

### Compilation

From the root of the repository:

```bash
make
```

This compiles every `ft_*.c` file and creates `libft.a` at the root of the repository. The Makefile does not relink if nothing has changed.

Available rules:

| Rule | Action |
|---|---|
| `make` / `make all` | Builds `libft.a`. |
| `make clean` | Removes the object files. |
| `make fclean` | Removes the object files and `libft.a`. |
| `make re` | Runs `fclean`, then `all`. |

### Usage

Include the header in your source file:

```c
#include "libft.h"
```

Then compile your program and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

Small example:

```c
#include "libft.h"

int	main(void)
{
	char	**words;
	int		i;

	words = ft_split("hello from libft", ' ');
	if (!words)
		return (1);
	i = 0;
	while (words[i])
	{
		ft_putendl_fd(words[i], 1);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}
```

### Testing

Test programs are not part of the submission. To compare `strlcpy`, `strlcat` and `bzero` against the system versions on glibc systems, include `<bsd/string.h>` in your own test file and compile it with `-lbsd`.

## Resources

### References

- `man` pages (section 3) for every re-implemented libc function: `man 3 strlen`, `man 3 memmove`, etc.
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language), Kernighan & Ritchie.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html).
- `man ar`, for creating static libraries.
- [42 Norm](https://github.com/42School/norminette), checked with `norminette`.
- [Valgrind documentation](https://valgrind.org/docs/manual/manual.html), for detecting memory leaks and invalid accesses.

### Use of AI

AI was used to draft the structure and wording of this `README.md` from the project subject.

