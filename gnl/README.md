*This project has been created as part of the 42 curriculum by rcalzas.*

# get_next_line

## Description

**get_next_line** is a C function that reads a file descriptor and returns its content **one line at a time**, each time it is called. The returned line includes the terminating `\n` (except possibly for the last line of a file that does not end with a newline).

The goal of the project is to learn about:

- **Static variables**, to keep state between calls.
- **File descriptors** and the `read()` system call.
- **Dynamic memory management**: every allocation must be freed, with no leaks, even on error paths.
- Reading with a configurable buffer size, whatever value `BUFFER_SIZE` takes at compile time.

### Prototype

```c
char *get_next_line(int fd);
```

| Return value | Meaning                                              |
|--------------|------------------------------------------------------|
| A string     | The line that was read, including the `\n` if any    |
| `NULL`       | Nothing more to read, or an error occurred           |

### Algorithm

The function keeps leftover data in a `static char *stash`. Each call goes through three steps:

1. **`read_to_stash`**: reads `BUFFER_SIZE` bytes at a time with `read()` and appends them to the stash (`ft_strjoin`) until the stash contains a `\n` or EOF is reached.
2. **`extract_line`**: copies everything from the start of the stash up to and including the first `\n` (or the whole stash if there is none) into a new string, which is the line to return.
3. **`trim_stash`**: frees the old stash and keeps only what comes after the returned line for the next call. If nothing is left, the stash is freed and set to `NULL`.

If `read()` fails, or if an allocation fails, every buffer is freed and `NULL` is returned.

### Project structure

| File                     | Content                                                                  |
|--------------------------|--------------------------------------------------------------------------|
| `get_next_line.c`        | Main function and its static helpers (`read_to_stash`, `extract_line`, `trim_stash`) |
| `get_next_line_utils.c`  | Utility functions: `ft_strlen`, `ft_strchr`, `ft_strjoin`, `ft_strlcat`, `ft_substr` |
| `get_next_line.h`        | Header: prototypes, includes and the default `BUFFER_SIZE`               |

## Instructions

### Compilation

The function must be compiled with the `-D BUFFER_SIZE=n` flag, where `n` is the size of the buffer used by `read()`:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
```

If the flag is omitted, `BUFFER_SIZE` defaults to `42` (defined in `get_next_line.h`).

### Usage

Include the header and call the function in a loop until it returns `NULL`:

```c
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
```

> The caller is responsible for freeing every line returned by `get_next_line`.

### Testing

Try different buffer sizes, including extreme ones, and check for memory leaks:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=1      get_next_line.c get_next_line_utils.c main.c -o gnl
cc -Wall -Wextra -Werror -D BUFFER_SIZE=9999   get_next_line.c get_next_line_utils.c main.c -o gnl
cc -Wall -Wextra -Werror -D BUFFER_SIZE=10000000 get_next_line.c get_next_line_utils.c main.c -o gnl
valgrind --leak-check=full ./gnl
```

Cases worth testing: empty file, file with a single line without `\n`, file with only `\n`, very long lines, invalid file descriptor, and reading from standard input (`fd = 0`).

## Resources

- `man 2 read`, `man 2 open`, `man 3 malloc`, `man 3 free`
- [Static variables in C](https://en.wikipedia.org/wiki/Static_variable)
- [File descriptor](https://en.wikipedia.org/wiki/File_descriptor)
- [Valgrind documentation](https://valgrind.org/docs/manual/manual.html)
- The *get_next_line* subject from the 42 curriculum

### AI usage

AI was used to help write this `README.md`. The project's source code was written by the author.
