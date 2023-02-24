ft\_lib and ft\_printf
======================

This project is a recreation of the standard `stdlib` library in C, with implementations for commonly used functions such as string manipulation, memory management, and linked lists. All of the functions are prefixed with `ft_`.

## How to compile:

```bash
git clone https://github.com/Dwimpy/libft-printf
make
```

Functions
---------

### String Manipulation

*   `ft_strncmp` - compares two strings up to `n` characters.
*   `ft_strchr` - finds the first occurrence of a character in a string.
*   `ft_strrchr` - finds the last occurrence of a character in a string.
*   `ft_strnstr` - finds the first occurrence of a substring in a string, up to `len` characters.
*   `ft_strdup` - duplicates a string.
*   `ft_substr` - returns a substring from a string.
*   `ft_strjoin` - concatenates two strings.
*   `ft_strtrim` - removes leading and trailing whitespace characters from a string.
*   `ft_split` - splits a string into an array of substrings based on a delimiter character.
*   `ft_itoa` - converts an integer to a string.
*   `ft_strnew_zeros` - creates a new string filled with a given character, with a specified length.
*   `ft_strmapi` - applies a function to each character in a string.
*   `ft_striteri` - applies a function to each character in a string, with an index.

### Memory Management

*   `ft_bzero` - fills a memory area with zeros.
*   `ft_memset` - fills a memory area with a specified byte value.
*   `ft_memcpy` - copies a memory area from one location to another.
*   `ft_memmove` - copies a memory area from one location to another, handling overlaps.
*   `ft_memchr` - searches a memory area for a specific byte value.
*   `ft_calloc` - allocates memory and sets it to zero.
*   `ft_memcmp` - compares two memory areas up to a specified length.

### Linked Lists

*   `ft_lstnew` - creates a new node for a linked list.
*   `ft_lstlast` - finds the last node in a linked list.
*   `ft_lstmap` - creates a new linked list by applying a function to each node of an existing linked list.
*   `ft_lstadd_front` - adds a new node to the beginning of a linked list.
*   `ft_lstadd_back` - adds a new node to the end of a linked list.
*   `ft_lstdelone` - deletes a node from a linked list.
*   `ft_lstclear` - deletes all nodes from a linked list.
*   `ft_lstiter` - applies a function to each node in a linked list.
*   `ft_lstsize` - counts the number of nodes in a linked list.

### Other

*   `ft_isalnum` - checks if a character is alphanumeric.
*   `ft_isalpha` - checks if a character is alphabetic.
*   `ft_isascii` - checks if a character is a valid ASCII character.
*   `ft_isdigit` - checks if a character is a digit.
*   `ft_isprint` - checks if a character is printable.
*   `ft_atoi` - converts a string to an integer.
*   `ft_tolower` - converts a character to lowercase.
*   `ft_toupper` - converts a character to uppercase.
*   `ft_contains` - checks if a string contains a specific character.

### Additional String Manipulation

*   `ft_concat` - concatenates multiple strings.
*   `ft_strjoin_four` - concatenates four strings.
*   `ft_strjoin_three` - concatenates three strings.
*   `ft_strlcat` - appends a string to another string

### Additional String Manipulation Functions

The following functions provide additional string manipulation capabilities beyond what is provided by the standard library.

*   `char *ft_strjoin_four`: Concatenates four strings together and returns the result.
*   `char *ft_strjoin_three`: Concatenates three strings together and returns the result.
*   `size_t ft_strlcat`: Appends a string to the end of another string, ensuring that the resulting string is null-terminated and that the total length of the resulting string does not exceed a given size.
*   `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)`: Copies a string, ensuring that the resulting string is null-terminated and that the total length of the resulting string does not exceed a given size.
*   `size_t ft_strlen`: Returns the length of a string.
*   `size_t ft_min`: Returns the minimum of two size\_t values.

These functions are useful for string manipulation tasks such as concatenating multiple strings together or ensuring that a string does not exceed a certain length.

ft\_printf function
-------------------

`ft_printf` is a variadic function that formats and prints output to the standard output stream (stdout). It is modeled after the standard `printf` function in the C library, but it is implemented using only the functions provided by the `libft` library.

The function takes a format string, which specifies the format of the output, followed by optional arguments that correspond to the format specifiers in the format string. The function then formats the output according to the format string and prints it to the standard output stream.

The function supports a variety of format specifiers, including integers, floating-point numbers, strings, characters, and pointers, and it also provides support for various flags, such as padding, precision, and field width, that can be used to further customize the output.

`ft_printf` returns the number of characters printed to the standard output stream, excluding the terminating null byte. If an error occurs, it returns a negative value.
