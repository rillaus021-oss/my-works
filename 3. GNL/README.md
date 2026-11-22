*This activity has been created as part of the 42 curriculum by scahamad.*

# Get Next Line

## Description

`get_next_line(int fd)` returns one line at a time from a file descriptor.
The returned, dynamically allocated string includes the newline character
when present. At end-of-file or on error, the function returns `NULL`.

The mandatory implementation uses a local static pointer to preserve unread
characters between calls. It reads from regular files, pipes, and standard
input. It does not link against or include Libft.

## Instructions

Compile both source files together with your test program, using `cc` and
`-Wall -Wextra -Werror`:

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 \
  get_next_line.c get_next_line_utils.c main.c -o test_gnl
./test_gnl
```

To test another buffer size, replace 42 with 1, 8, 4096, etc.
The code uses a default `BUFFER_SIZE` of 42 when it is not defined.
`main.c` is a local testing file and must **not** be submitted.
The caller owns each non-NULL returned line and must `free()` it.

## Algorithm and design choices

1. A function-local `static char *stash` retains bytes already read but not
   yet delivered to the caller. This persistence is essential because one
   `read()` call can contain several lines.
2. While the stash does not contain `\n`, a helper reads chunks of at most
   `BUFFER_SIZE` bytes and concatenates them to the stash. It stops at the
   first complete line rather than reading the entire file.
3. The first line, including any terminating newline, is copied into a new
   `malloc()`-allocated string, so the caller can free it independently.
4. The unused suffix is shifted to the start of the stash **in place**.
   This avoids an extra allocation, which would introduce a second possible
   failure while storing the remaining characters.
5. The stash is freed when empty or on error. A final line without a
   newline is returned at EOF; the subsequent call returns `NULL`.

The choice of a dynamically allocated stash makes the algorithm independent
of line length; `BUFFER_SIZE` affects the number of reads, not line size.
`read`, `malloc`, and `free` are the only external functions called.
The mandatory variant uses a single stash shared by successive calls; it is
not the optional multi-file-descriptor bonus.

## Resources

- École 42 *Get Next Line* subject, version 1.3.
- Manual pages `man 2 read`, `man 3 malloc`, `man 3 free`.
- C reference for static storage duration and null-terminated strings.

### Use of AI

AI assisted with review of error handling, documentation, and designing test cases. 
