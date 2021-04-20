# libft

A C code library with my own implementation of some Libc functions and other additional ones.

## Testers
- https://github.com/alelievr/libft-unit-test
- https://github.com/jtoty/Libftest
- https://github.com/ska42/libft-war-machine
- https://github.com/Tripouille/libftTester

## Part 1 - Libc functions

- [memset](https://www.man7.org/linux/man-pages/man3/memset.3.html)
- [bzero](https://man7.org/linux/man-pages/man3/bzero.3.html) 
- [memcpy](https://man7.org/linux/man-pages/man3/memcpy.3.html)
- [memccpy](https://man7.org/linux/man-pages/man3/memccpy.3.html)
- [memmove](https://man7.org/linux/man-pages/man3/memmove.3.html)
- [memcmp](https://man7.org/linux/man-pages/man3/memcmp.3.html)
- [strlen](https://man7.org/linux/man-pages/man3/strlen.3.html)
- [strlcpy](https://linux.die.net/man/3/strlcpy)
- [strlcat](https://linux.die.net/man/3/strlcat)
- [strchr](https://man7.org/linux/man-pages/man3/strchr.3.html)
- [strrchr](https://man7.org/linux/man-pages/man3/strchrnul.3.html)
- [strncmp](https://man7.org/linux/man-pages/man3/strncmp.3p.html)
- [atoi](https://man7.org/linux/man-pages/man3/atoi.3.html)
- [isalpha](https://man7.org/linux/man-pages/man3/isspace.3.html)
- [isdigit](https://man7.org/linux/man-pages/man3/isspace.3.html)
- [isalnum](https://man7.org/linux/man-pages/man3/isspace.3.html)
- [isascii](https://man7.org/linux/man-pages/man3/isspace.3.html)
- [isprint](https://man7.org/linux/man-pages/man3/isspace.3.html)
- [toupper](https://man7.org/linux/man-pages/man3/tolower_l.3.html)
- [tolower](https://man7.org/linux/man-pages/man3/tolower_l.3.html)
- [calloc](https://man7.org/linux/man-pages/man3/calloc.3p.html)
- [strdup](https://man7.org/linux/man-pages/man3/strdup.3.html)

## Part 2 - Additional functions

Functions that are either not included in the libc, or included in a different form.

Function name | ft_substr
------------ | -------------
Prototype | char *ft_substr(char const *s, unsigned int start,size_t len);
Parameters | 1. The string from which to create the substring. 2. The start index of the substring in the string’s’. 3. The maximum length of the substring.
Return value | The substring.  NULL if the allocation fails.
External functs. | malloc
Description | Allocates (with malloc(3)) and returns a substringfrom the string ’s’. The substring begins at index ’start’ and is ofmaximum size ’len’.

Function name | ft_strjoin
------------ | -------------
Prototype | char *ft_strjoin(char const *s1, char const *s2);
Parameters | 1. The prefix string. 2. The suffix string.
Return value | The new string.  NULL if the allocation fails.
External functs. | malloc
Description | Allocates (with malloc(3)) and returns a newstring, which is the result of the concatenationof ’s1’ and ’s2’.

Function name | ft_strtrim
------------ | -------------
Prototype | char *ft_strtrim(char const *s1, char const *set);
Parameters | 1. The string to be trimmed. 2. The reference set of characters to trim.
Return value | The trimmed string.  NULL if the allocation fails.
External functs. | malloc
Description | Allocates (with malloc(3)) and returns a copy of’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

Function name | ft_split
------------ | -------------
Prototype | char **ft_split(char const *s, char c);
Parameters | 1. The string to be split. 2. The delimiter character.
Return value | The trimmed string.  NULL if the allocation fails.
External functs. | malloc, free
Description | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.

Function name | ft_itoa
------------ | -------------
Prototype | char *ft_itoa(int n);
Parameters | 1. The integer to convert.
Return value | The string representing the integer.  NULL if theallocation fails.
External functs. | malloc
Description | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

Function name | ft_strmapi
------------ | -------------
Prototype | char *ft_strmapi(char const *s, char (*f)(unsignedint, char));
Parameters | 1. The string on which to iterate. 2. The function to apply to each character.
Return value | The string created from the successive applicationsof ’f’.  Returns NULL if the allocation fails.
External functs. | malloc
Description | Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3))resulting from successive applications of ’f’.

Function name | ft_putchar_fd
------------ | -------------
Prototype | void ft_putchar_fd(char c, int fd);
Parameters | 1. The character to output. 2. The file descriptor on which to write.
Return value | None.
External functs. | write
Description | Outputs the character ’c’ to the given file descriptor.

Function name | ft_putstr_fd
------------ | -------------
Prototype | void ft_putstr_fd(char *s, int fd);
Parameters | 1. The string to output. 2. The file descriptor on which to write.
Return value | None.
External functs. | write
Description | Outputs the string ’s’ to the given file descriptor.

Function name | ft_putendl_fd
------------ | -------------
Prototype | void ft_putendl_fd(char *s, int fd);
Parameters | 1. The string to output. 2. The file descriptor on which to write.
Return value | None.
External functs. | write
Description | Outputs the string ’s’ to the given file descriptor, followed by a newline.

Function name | ft_putnbr_fd
------------ | -------------
Prototype | void ft_putnbr_fd(int n, int fd);
Parameters | 1. The integer to output. 2. The file descriptor on which to write.
Return value | None.
External functs. | write
Description | Outputs the integer ’n’ to the given file descriptor.

## Bonus part

Function name | ft_lstnew
------------ | -------------
Prototype | t_list *ft_lstnew(void *content);
Parameters | 1. The content to create the new element with.
Return value | The new element.
External functs. | malloc
Description | Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initializedwith the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

Function name | ft_lstadd_front
------------ | -------------
Prototype | void ft_lstadd_front(t_list **lst, t_list *new);
Parameters | 1. The address of a pointer to the first link of a list. 2. The address of a pointer to the element to be added to the list.
Return value | None
External functs. | None
Description | Adds the element ’new’ at the beginning of the list.

Function name | ft_lstsize
------------ | -------------
Prototype | int ft_lstsize(t_list *lst);
Parameters | 1. The beginning of the list.
Return value | Length of the list.
External functs. | None
Description | Counts the number of elements in a list.

Function name | ft_lstlast
------------ | -------------
Prototype | t_list *ft_lstlast(t_list *lst);
Parameters | 1. The beginning of the list.
Return value | Last element of the list.
External functs. | None
Description | Returns the last element of the list.

Function name | ft_lstadd_back
------------ | -------------
Prototype | void ft_lstadd_back(t_list **lst, t_list *new);
Parameters | 1. The address of a pointer to the first link of a list. 2. The address of a pointer to the element to be added to the list.
Return value | None
External functs. | None
Description | Adds the element ’new’ at the end of the list.

Function name | ft_lstdelone
------------ | -------------
Prototype | void ft_lstdelone(t_list *lst, void (*del)(void*));
Parameters | 1. The element to free. 2. The address of the function used to delete the content.
Return value | None
External functs. | free
Description | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.

Function name | ft_lstclear
------------ | -------------
Prototype | void ft_lstclear(t_list **lst, void (*del)(void*));
Parameters | 1. The adress of a pointer to an element. 2. The adress of the function used to delete thecontent of the element.
Return value | None
External functs. | free
Description | Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.

Function name | ft_lstiter
------------ | -------------
Prototype | void ft_lstiter(t_list *lst, void (*f)(void *));
Parameters | 1. The adress of a pointer to an element. 2. The adress of the function used to iterate on the list.
Return value | None
External functs. | None
Description | Iterates the list ’lst’ and applies the function ’f’ to the content of each element.

Function name | ft_lstmap
------------ | -------------
Prototype | t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
Parameters | 1. The adress of a pointer to an element. 2. The adress of the function used to iterate on the list. 3. The adress of the function used to delete the content of an element if needed
Return value | The new list.  NULL if the allocation fails.
External functs. | malloc, free
Description | Iterates the list ’lst’ and applies the function ’f’ to the content of each element.  Creates a new list resulting of the successive applications of the function ’f’.  The ’del’ function is used to delete the content of an element if needed.