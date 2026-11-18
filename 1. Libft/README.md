*This activity has been created as part of the 42 curriculum by scahamad.*

# Libft

## Description

Libft is a static C library developed for the 42 curriculum. It provides
implementations of common libc functions and additional utilities for strings,
file descriptors, and singly linked lists. The library is built as `libft.a`.

The **43 required functions** are organized into three parts in the Libft v1.3
subject. All are included in a single `SRCS` list, so a normal `make` compiles
the entire library. The third part (linked lists) is required in this version.

## Library functions

### Part 1 — Libc functions

| Function | Purpose |
| --- | --- |
| `ft_isalpha` | Checks if a character is an ASCII letter (returns 1 or 0). |
| `ft_isdigit` | Checks if a character is a decimal digit (returns 1 or 0). |
| `ft_isalnum` | Checks if a character is a letter or digit (returns 1 or 0). |
| `ft_isascii` | Checks if a value lies within the ASCII range (returns 1 or 0). |
| `ft_isprint` | Checks if a character is printable (returns 1 or 0). |
| `ft_strlen` | Calculates the length of a null-terminated string. |
| `ft_memset` | Fills a memory area with a given byte value. |
| `ft_bzero` | Sets a number of bytes to zero. |
| `ft_memcpy` | Copies a memory area when source and destination do not overlap. |
| `ft_memmove` | Copies bytes safely when memory areas overlap. |
| `ft_strlcpy` | Copies a string within a destination buffer size. |
| `ft_strlcat` | Appends a string within a destination buffer size. |
| `ft_toupper` | Converts an ASCII lowercase letter to uppercase. |
| `ft_tolower` | Converts an ASCII uppercase letter to lowercase. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings within a maximum number of characters. |
| `ft_memchr` | Searches for a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_strnstr` | Finds a substring within a bounded number of characters. |
| `ft_atoi` | Converts the beginning of a string to an integer. |
| `ft_calloc` | Allocates zero-initialized memory, including zero-size cases. |
| `ft_strdup` | Allocates and returns a duplicate of a string. |

### Part 2 — Additional functions

| Function | Purpose |
| --- | --- |
| `ft_substr` | Allocates a substring of a given maximum length. |
| `ft_strjoin` | Allocates the concatenation of two strings. |
| `ft_strtrim` | Trims a set of characters from both ends of a string. |
| `ft_split` | Splits a string by one delimiter into a null-terminated array. |
| `ft_itoa` | Allocates the decimal representation of an integer. |
| `ft_strmapi` | Builds a new string with a character transformation callback. |
| `ft_striteri` | Applies a callback to each character in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes a signed integer to a file descriptor. |

### Part 3 — Linked lists

The `t_list` type is a singly linked node containing `void *content` and a
pointer to the next node. The generic content pointer allows the caller to
store arbitrary data; callbacks manage content transformation and deletion.

| Function | Purpose |
| --- | --- |
| `ft_lstnew` | Allocates a new node with its `next` pointer set to `NULL`. |
| `ft_lstadd_front` | Inserts a node at the beginning of a list. |
| `ft_lstsize` | Counts nodes and returns an `unsigned int`. |
| `ft_lstlast` | Returns the final node of a list. |
| `ft_lstadd_back` | Inserts a node at the end of a list. |
| `ft_lstdelone` | Deletes one node and its content using a callback. |
| `ft_lstclear` | Deletes the list and sets the head pointer to `NULL`. |
| `ft_lstiter` | Applies a callback to every node's content. |
| `ft_lstmap` | Creates a new transformed list and cleans up on allocation failure. |

## Instructions

### Build

Run from the directory containing the source files and Makefile:

```sh
make          # Build all 43 functions into libft.a
make all      # Same as make
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Rebuild the entire library
```

The project uses `cc -Wall -Wextra -Werror` to compile source files and
`ar rcs` to build the static archive. Each `.o` depends on its corresponding
`.c` file and `libft.h` so unchanged files are not unnecessarily rebuilt.

### Link Libft with another C program

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, Libft!", 1);
    return (0);
}
```

```sh
make
cc -Wall -Wextra -Werror main.c -L. -lft -o example
./example
```

### Memory ownership

The string-creating functions return allocated memory which the caller must
free. `ft_split` allocates every substring separately, as well as the array
of pointers; free each word and then the array. When manipulating linked
lists, the caller supplies a deletion callback for owned content.

## Implementation overview

String operations traverse null-terminated arrays, while memory functions
operate on bytes and explicit lengths. `ft_memmove` selects a copy direction
to handle overlapping memory correctly. `ft_itoa` uses a wider integer type
to handle `INT_MIN`. `ft_split` first counts words, then allocates each word,
and releases earlier allocations if a later allocation fails. Linked lists
use a `next` pointer for traversal and callbacks for generic content.

All helper functions used within a source file are declared `static`.
There are no global variables.

## Verification

The project can be checked locally with:

```sh
make fclean && make
make                        # Must not recompile or re-archive
ar t libft.a                # Lists the 43 compiled objects
norminette *.c libft.h
```

## Resources

- The official 42 **Libft subject, version 1.3**.
- C manual pages (`man 3 strlen`, `man 3 memcpy`, `man 3 malloc`, `man 3 free`).
- [C language reference](https://en.cppreference.com/w/c)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)

### Use of AI

AI was used to explain C pointers, memory handling, callbacks, linked lists,
and Makefiles; and help prepare documentation.
