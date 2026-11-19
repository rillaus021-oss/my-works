*This activity has been created as part of the 42 curriculum by scahamad.*

# ft_printf

## Description

Implementation of `ft_printf`, a simplified version of the C standard
`printf` function, returning the number of characters printed.

Supported conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` and `%%`.

## Instructions

Run `make` to build `libftprintf.a`.

- `make`: build the static library.
- `make clean`: remove object files.
- `make fclean`: remove object files and `libftprintf.a`.
- `make re`: rebuild everything.

To use the library, include `ft_printf.h` in your C program and link
against `libftprintf.a`.

## Resources

- The ft_printf project subject from École 42.
- `man 3 printf`, `man 2 write`, `man 3 stdarg`.
- Community tests: https://github.com/brunogo25/42-cli

The project is written in C, uses `write` to produce output, and does not
depend on Libft.
