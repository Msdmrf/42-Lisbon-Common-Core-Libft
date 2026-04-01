*This project has been created as part of the 42 curriculum by migusant.*

# Libft

A custom C library that re-implements essential standard library functions along with additional utility functions. This project builds a solid foundation in C programming, memory management, and string manipulation that serves as the base for all future 42 projects.

## Description

Libft is the first project in the 42 Common Core curriculum. It requires re-implementing a selection of functions from the C standard library (`<string.h>`, `<strings.h>`, `<stdlib.h>`, `<ctype.h>`) as well as creating additional non-standard utility functions. The bonus part introduces a linked list implementation with a complete set of operations.

### Key Features

- **Standard library re-implementations** faithful to their original behavior and prototypes
- **Non-standard utility functions** for string manipulation, memory allocation, and file descriptor output
- **Linked list implementation** (bonus) with creation, traversal, insertion, deletion, and mapping operations
- **Static library** (`libft.a`) compiled with `ar` for easy linking into future projects
- **Strict 42 Norm compliance** with `-Wall -Wextra -Werror` compiler flags

### Project Structure

```
libft/
  ├── libft.h              # Header with structures and function prototypes
  ├── Makefile             # Build system with mandatory and bonus targets
  ├── LICENSE              # MIT License
  │
  ├── ft_strchr.c          # String functions from <string.h>
  ├── ft_strrchr.c
  ├── ft_strnstr.c
  ├── ft_strdup.c
  ├── ft_strlen.c
  ├── ft_strlcpy.c
  ├── ft_strlcat.c
  ├── ft_strncmp.c
  ├── ft_memcmp.c
  ├── ft_memcpy.c
  ├── ft_memmove.c
  ├── ft_memset.c
  ├── ft_memchr.c
  │
  ├── ft_bzero.c           # String function from <strings.h>
  │
  ├── ft_atoi.c            # Functions from <stdlib.h>
  ├── ft_calloc.c
  │
  ├── ft_isalpha.c         # Character functions from <ctype.h>
  ├── ft_isdigit.c
  ├── ft_isalnum.c
  ├── ft_isascii.c
  ├── ft_isprint.c
  ├── ft_toupper.c
  ├── ft_tolower.c
  │
  ├── ft_substr.c          # Non-standard utility functions
  ├── ft_strjoin.c
  ├── ft_strtrim.c
  ├── ft_split.c
  ├── ft_itoa.c
  ├── ft_strmapi.c
  ├── ft_striteri.c
  ├── ft_putchar_fd.c
  ├── ft_putstr_fd.c
  ├── ft_putendl_fd.c
  ├── ft_putnbr_fd.c
  │
  ├── ft_lstnew.c          # Bonus: Linked list functions
  ├── ft_lstadd_front.c
  ├── ft_lstsize.c
  ├── ft_lstlast.c
  ├── ft_lstadd_back.c
  ├── ft_lstdelone.c
  ├── ft_lstclear.c
  ├── ft_lstiter.c
  └── ft_lstmap.c
```

## Instructions

### Compilation

```bash
make        # Compile the mandatory part into libft.a
make bonus  # Compile mandatory + bonus (linked list) functions
make clean  # Remove object files
make fclean # Remove object files and the library
make re     # Recompile from scratch
```

This produces the `libft.a` static library.

### Usage

To use libft in another project, include the header and link the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror -o program main.c -L. -lft
```

## Function Reference

### Functions from `<string.h>`

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Locate first occurrence of character in string |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Locate last occurrence of character in string |
| `ft_strnstr` | `char *ft_strnstr(const char *big, const char *little, size_t len)` | Locate substring in string (bounded) |
| `ft_strdup` | `char *ft_strdup(const char *s)` | Duplicate a string with `malloc` |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Calculate string length |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Size-bounded string copy |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Size-bounded string concatenation |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compare two strings (bounded) |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compare memory areas |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copy memory area |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | Copy memory area (overlap-safe) |
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | Fill memory with a constant byte |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Scan memory for a byte |

### Functions from `<strings.h>`

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Zero a byte string |

### Functions from `<stdlib.h>`

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_atoi` | `int ft_atoi(const char *nptr)` | Convert ASCII string to integer |
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size)` | Allocate zeroed memory |

### Functions from `<ctype.h>`

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_isalpha` | `int ft_isalpha(int c)` | Check for alphabetic character |
| `ft_isdigit` | `int ft_isdigit(int c)` | Check for digit character |
| `ft_isalnum` | `int ft_isalnum(int c)` | Check for alphanumeric character |
| `ft_isascii` | `int ft_isascii(int c)` | Check for ASCII character |
| `ft_isprint` | `int ft_isprint(int c)` | Check for printable character |
| `ft_toupper` | `int ft_toupper(int c)` | Convert to uppercase |
| `ft_tolower` | `int ft_tolower(int c)` | Convert to lowercase |

### Non-Standard Functions

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Extract substring from string |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Concatenate two strings into new allocation |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Trim characters from both ends of string |
| `ft_split` | `char **ft_split(char const *s, char c)` | Split string by delimiter into array |
| `ft_itoa` | `char *ft_itoa(int n)` | Convert integer to ASCII string |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Apply function to each character (new string) |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Apply function to each character (in-place) |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Output character to file descriptor |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Output string to file descriptor |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Output string with newline to file descriptor |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Output integer to file descriptor |

### Bonus: Linked List Functions

The bonus part uses the following structure:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
}                 t_list;
```

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Create new list node |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Add node to beginning of list |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Count nodes in list |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Return last node of list |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Add node to end of list |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void*))` | Delete one node |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void*))` | Delete and free entire list |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Apply function to each node's content |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Create new list by applying function to each node |

## Resources

### Classic References

**C Standard Library:**
- `man string(3)` - String operations overview
- `man malloc(3)` - Dynamic memory allocation
- `man free(3)` - Freeing allocated memory
- [C Standard Library Reference (cppreference)](https://en.cppreference.com/w/c/header) - Comprehensive C library documentation

**Linked Lists:**
- [Linked List Data Structure (Wikipedia)](https://en.wikipedia.org/wiki/Linked_list) - Singly linked list concepts
- `man 3 queue` - BSD queue/list macros for reference

**Build Tools:**
- `man ar(1)` - Create and maintain library archives
- `man make(1)` - GNU make utility
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) - Makefile syntax and features

**Memory Debugging:**
- `man valgrind(1)` - Valgrind command-line options
- [Valgrind Manual](https://valgrind.org/docs/manual/manual.html) - Memory error detection

### AI Usage

AI tools (GitHub Copilot, ChatGPT) were used as a **thinking partner and learning assistant** to discuss concepts and approaches, but all final code, architecture decisions, and bug fixes were produced by the student after understanding the underlying concepts.

**Documentation & Understanding:**
- Clarifying standard library function behavior and edge cases
- Understanding memory management concepts (overlapping regions, NULL handling)
- Explaining linked list operations and pointer manipulation
- Structuring README.md documentation

**Code Review:**
- Identifying potential memory leaks and edge cases
- Reviewing function behavior against man page specifications

**Learning Resources:**
- Providing quick reference for standard library function signatures
- Clarifying differences between similar functions (e.g., `memcpy` vs `memmove`)

## License

This project is part of the 42 Common Core curriculum. See [LICENSE](LICENSE) for details.
