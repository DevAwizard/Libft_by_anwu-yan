List of functions

Easy functions
These functions are basic and fundamental for handling characters, strings, memory, and simple conversions:



int		ft_isalnum(int c);                                                             |  Checks if the character is alphanumeric.
int		ft_isalpha(int c);                                                             |  Checks if the character is alphabetic.
int		ft_isascii(int c);                                                             |  Checks if the character is in the ASCII set.
int		ft_isdigit(int c);                                                             |  Checks if the character is a digit.
int		ft_isprint(int c);                                                             |  Checks if the character is printable.
size_t	ft_strlen(const char *s);                                                      |  Returns the length of a string.
void	*ft_memset(void *b, int c, size_t len);                                        |  Fills memory with a constant byte.
void	ft_bzero(void *s, size_t n);                                                   |  Zeroes a block of memory.
void	*ft_memcpy(void *dst, const void *src, size_t n);                              |  Copies memory area.
void	*ft_memmove(void *dst, const void *src, size_t len);                           |  Moves memory area.
int		ft_toupper(int c);                                                             |  Converts character to uppercase.
int		ft_tolower(int c);                                                             |  Converts character to lowercase.
void	*ft_calloc(size_t count, size_t size);                                         |  Allocates memory for an array, initializing it to zero.
void	ft_putchar_fd(char c, int fd);                                                 |  Outputs a character to the given file descriptor.


Intermediate level 
These functions are more complex and deal with string manipulation, memory comparison, and additional utility functions:

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);                        |  Copies a string into a sized buffer.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);                        |  Appends a string to another, ensuring the result fits into a sized buffer.
char	*ft_strchr(const char *s, int c);                                              |  Locates the first occurrence of a character in a string.
char	*ft_strrchr(const char *s, int c);                                             |  Locates the last occurrence of a character in a string.
int		ft_strncmp(const char *s1, const char *s2, size_t n);                          |  Compares two strings up to n characters.
void	*ft_memchr(const void *s, int c, size_t n);                                    |  Searches for a character in a block of memory.
int		ft_memcmp(const void *s1, const void *s2, size_t n);                           |  Compares two blocks of memory.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);             |  Locates a substring in a string, where the search is limited to the first len characters.
int		ft_atoi(const char *str);                                                      |  Converts a string to an integer.
char	*ft_strdup(const char *s1);                                                    |  Duplicates a string.
char	*ft_strjoin(char const *s1, char const *s2);                                   |  Concatenates two strings into a new string.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));                          |  Applies a function to each character of a string.
void	ft_putstr_fd(char *s, int fd);                                                 |  Outputs a string to the given file descriptor.
void	ft_putendl_fd(char *s, int fd);                                                |  Outputs a string to the given file descriptor, followed by a newline.
void	ft_putnbr_fd(int n, int fd);                                                   |  Outputs an integer to the given file descriptor.


Difficult 
These functions involve more advanced string manipulation and dynamic memory allocation for creating and manipulating complex data structures:
char	*ft_substr(char const *s, unsigned int start, size_t len);                     |  Extracts a substring from a string.
char	*ft_strtrim(char const *s1, char const *set);                                  |  Trims the beginning and end of a string of any set of characters.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));                     |  Applies a function to each character of a string to create a new string.
char	*ft_itoa(int n);                                                               |  Converts an integer to a string.
char	**ft_split(char const *s, char c);                                             |  Splits a string into an array of strings using a character as the delimiter.