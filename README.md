*This project has been created as part of the 42 curriculum by chel-bou.*

# Libft

A C library built one function at a time.

## Description

Libft is a personal C library developed as part of the 1337 Common Core curriculum.

The idea behind this project is to rebuild a collection of useful C functions from scratch, understand what happens behind their interfaces, and bring the implementations together into a library that can be reused in future projects.

The library covers several areas of low-level programming, from character and string manipulation to memory management, file descriptor operations, and linked lists.

The final result is `libft.a`, a static library containing these implementations.

## What's Inside?

The library is organized around five areas of functionality.

### Character Handling

Functions for character classification and conversion.

| Function | Purpose |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to ASCII. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### Strings and Text Manipulation

Functions for examining, modifying, searching, and creating strings.

- `ft_strlen` – Measures string length.
- `ft_strlcpy` – Copies a string within a specified buffer size.
- `ft_strlcat` – Appends a string while respecting a destination size.
- `ft_strchr` / `ft_strrchr` – Locate the first or last occurrence of a character.
- `ft_strncmp` – Compares two strings up to a given length.
- `ft_strnstr` – Searches for a substring within a specified range.
- `ft_strdup` – Creates an allocated copy of a string.
- `ft_substr` – Extracts part of an existing string.
- `ft_strjoin` – Combines two strings into a new allocation.
- `ft_strtrim` – Removes selected characters from both ends.
- `ft_split` – Splits a string into smaller strings using a delimiter.
- `ft_itoa` – Converts an integer into its string representation.
- `ft_strmapi` – Creates a transformed string using a function.
- `ft_striteri` – Applies a function to each character using its index.

### Memory Operations

Functions that operate directly on memory, covering initialization, copying, searching, comparison, and allocation.

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### File Descriptor Output

Functions for writing different types of data to a specified file descriptor.

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Linked Lists

A singly linked list implementation where each node stores a pointer to its content and a reference to the next node.

The structure used:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Available operations:

- `ft_lstnew` – Creates a new node.
- `ft_lstadd_front` – Inserts a node at the beginning.
- `ft_lstsize` – Counts the nodes.
- `ft_lstlast` – Retrieves the last node.
- `ft_lstadd_back` – Inserts a node at the end.
- `ft_lstdelone` – Deletes an individual node.
- `ft_lstclear` – Frees an entire list.
- `ft_lstiter` – Applies a function to every node's content.
- `ft_lstmap` – Creates a new list by transforming existing node contents.

## Instructions

The project requires a C compiler and a Unix development environment.

**Compile the library:**

```bash
make
```

This compiles the source files into object files and packages them into `libft.a`.

**Compile a program using Libft:**

First, include the library header in your C source file:

```c
#include "libft.h"
```

Then compile your program together with the static library:

```bash
cc main.c libft.a -o program
```

**Run the executable:**

```bash
./program
```

### Makefile Commands

| Command | Action |
|---|---|
| `make` | Builds the library. |
| `make clean` | Removes generated object files. |
| `make fclean` | Removes object files and the library. |
| `make re` | Performs a clean rebuild. |

## Resources & References

The following references helped me understand function behavior, system calls, and the expected results of different operations.

- [cppreference – C Library](https://en.cppreference.com/w/c/header) – C library documentation.
- [Linux man-pages](https://man7.org/linux/man-pages/) – Documentation for memory functions, strings, and system calls.
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) – Additional explanations of library functionality.

### AI Usage

AI was used as a technical learning assistant throughout the project.

Its involvement included:

- Explaining pointer operations, memory allocation, and linked list behavior.
- Clarifying function specifications and less obvious edge cases.
- Reviewing implementations and helping investigate bugs.
- Suggesting test cases, especially for boundary conditions.
- Explaining compilation, static libraries, and Makefile rules.
- Assisting with the organization and writing of project documentation.

AI served as a supplementary learning and debugging resource, while understanding and validating the implementations remained an essential part of the development process.

## Project Information

- **Curriculum:** 1337 Common Core
- **Language:** C
- **Library:** `libft.a`
- **Author:** chel-bou