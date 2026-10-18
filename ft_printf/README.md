*This project has been created as part of the 42 curriculum by rcalzas.*

# ft_printf

## Description
The goal of this project is to recode the popular and versatile C function `printf()` from the libc. It handles a variable number of arguments and provides a well-structured and extensible implementation of formatted output without using the original buffer management. 

This project implements the following conversions:
* `%c` Prints a single character.
* `%s` Prints a string (as defined by the common C convention).
* `%p` The void pointer argument is printed in hexadecimal format.
* `%d` Prints a decimal (base 10) number.
* `%i` Prints an integer in base 10.
* `%u` Prints an unsigned decimal (base 10) number.
* `%x` Prints a number in hexadecimal (base 16) lowercase format.
* `%X` Prints a number in hexadecimal (base 16) uppercase format.
* `%%` Prints a percent sign.

## Instructions
To compile the library, you must have `cc` and `make` installed on your system.

1. Clone the repository and navigate to the root directory.
2. Run `make` to compile the source files and generate the `libftprintf.a` library.
3. To use it in your projects, include the header `ft_printf.h` in your `.c` files and compile your code linking the library:
   ```bash
   cc my_program.c -L. -lftprintf -o my_program
   ```

**Makefile rules:**
* `make` or `make all`: Compiles the library `libftprintf.a` with `-Wall -Wextra -Werror` flags.
* `make clean`: Removes all `.o` object files.
* `make fclean`: Removes object files and the `libftprintf.a` binary.
* `make re`: Performs a full recompilation (`fclean` followed by `all`).

## Algorithm and Data Structures
The core architecture of this `ft_printf` implementation relies on a sequential parser combined with a dispatcher.

**1. Parsing State Machine:**
The main function iterates through the `format` string using a `while` loop. 
* If a regular character is encountered, it is immediately written to the standard output using a helper function (`ft_int_putchar`).
* If the `%` symbol is encountered, the algorithm enters a "conversion state". It reads the very next character and passes it to the dispatcher function (`ft_choose_format`).

**2. Variadic Arguments Handling:**
To manage an unknown number of parameters, the standard `<stdarg.h>` library is used. A `va_list` is initialized at the start of `ft_printf`. The dispatcher function uses `va_arg` to extract the exact data type required by the specific format specifier (e.g., extracting an `int` for `%d` or a `char *` for `%s`).

**3. Recursive Base Conversion:**
For numeric outputs (`%d`, `%i`, `%u`, `%x`, `%X`), I chose to implement a recursive function (`ft_int_putnbr_base`). 
* **Justification:** Recursion is elegantly suited for base conversion because it naturally reverses the order of characters to be printed. By dividing the number by the length of the base (e.g., 10 or 16) until it reaches 0, the function pushes the calls to the call stack. As the stack unwinds, it prints the remainders (mapped to the base string) in the correct left-to-right order.
* **Data Types:** To prevent overflow issues (especially with unsigned max values and memory addresses), the conversion function casts inputs to `unsigned long` or `uintptr_t` before processing.

**4. Tracking the Return Value:**
The original `printf` returns the total number of characters printed. To mimic this, every helper function (putchar, putstr, putnbr) returns an integer representing the characters it successfully wrote. The main loop accumulates these values and returns the total sum at the end of the execution.

## Resources
* **Documentation & References**: 
  * [C Variadic Functions (stdarg.h) - cppreference.com](https://en.cppreference.com/w/c/variadic)
  * Linux Manual Pages: `man 3 printf`, `man 3 stdarg`, and `man 2 write`.
* **AI Usage**: 
  * **Task:** Code review, and this readme.
