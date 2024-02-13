# Basado en el nivel de dificultad:

## Funciones Fáciles

Estas funciones son básicas y fundamentales para manejar caracteres, cadenas, memoria y conversiones simples:

ft_isalnum(int c); | Verifica si el carácter es alfanumérico.
ft_isalpha(int c); | Verifica si el carácter es alfabético.
ft_isascii(int c); | Verifica si el carácter está en el conjunto ASCII.
ft_isdigit(int c); | Verifica si el carácter es un dígito.
ft_isprint(int c); | Verifica si el carácter es imprimible.
ft_strlen(const char *s); | Devuelve la longitud de una cadena.
ft_memset(void *b, int c, size_t len); | Rellena la memoria con un byte constante.
ft_bzero(void *s, size_t n); | Pone a cero un bloque de memoria.
ft_memcpy(void *dst, const void *src, size_t n); | Copia un área de memoria.
ft_memmove(void *dst, const void *src, size_t len); | Mueve un área de memoria.
ft_toupper(int c); | Convierte un carácter a mayúsculas.
ft_tolower(int c); | Convierte un carácter a minúsculas.
ft_calloc(size_t count, size_t size); | Asigna memoria para un arreglo, inicializándolo a cero.
ft_putchar_fd(char c, int fd); | Imprime un carácter al descriptor de archivo dado.

## Nivel Intermedio

Estas funciones son más complejas y tratan sobre la manipulación de cadenas, comparación de memoria y funciones utilitarias adicionales:

ft_strlcpy(char *dst, const char *src, size_t dstsize); | Copia una cadena en un búfer de tamaño definido.
ft_strlcat(char *dst, const char *src, size_t dstsize); | Añade una cadena a otra, asegurando que el resultado quepa en un búfer de tamaño definido.
ft_strchr(const char *s, int c); | Localiza la primera ocurrencia de un carácter en una cadena.
ft_strrchr(const char *s, int c); | Localiza la última ocurrencia de un carácter en una cadena.
ft_strncmp(const char *s1, const char *s2, size_t n); | Compara dos cadenas hasta n caracteres.
ft_memchr(const void *s, int c, size_t n); | Busca un carácter en un bloque de memoria.
ft_memcmp(const void *s1, const void *s2, size_t n); | Compara dos bloques de memoria.
ft_strnstr(const char *haystack, const char *needle, size_t len); | Localiza una subcadena en una cadena, donde la búsqueda se limita a los primeros caracteres len.
ft_atoi(const char *str); | Convierte una cadena a un entero.
ft_strdup(const char *s1); | Duplica una cadena.
ft_strjoin(char const *s1, char const *s2); | Concatena dos cadenas en una nueva cadena.
ft_striteri(char *s, void (*f)(unsigned int, char*)); | Aplica una función a cada carácter de una cadena.
ft_putstr_fd(char *s, int fd); | Imprime una cadena al descriptor de archivo dado.
ft_putendl_fd(char *s, int fd); | Imprime una cadena al descriptor de archivo dado, seguido de un salto de línea.
ft_putnbr_fd(int n, int fd); | Imprime un entero al descriptor de archivo dado.


## Nivel Difícil

Estas funciones implican manipulación de cadenas más avanzada y asignación dinámica de memoria para crear y manipular estructuras de datos complejas:

ft_substr(char const *s, unsigned int start, size_t len); | Extrae una subcadena de una cadena.
ft_strtrim(char const *s1, char const *set); | Recorta el principio y el final de una cadena de cualquier conjunto de caracteres.
ft_strmapi(char const *s, char (*f)(unsigned int, char)); | Aplica una función a cada carácter de una cadena para crear una nueva cadena.
ft_itoa(int n); | Convierte un entero a una cadena.
ft_split(char const *s, char c); | Divide una cadena en un arreglo de cadenas usando un carácter como delimitador.




# Basado en su propósito:

## Verificaciones y Conversiones de Caracteres

- ft_isalnum(int c); | Verifica si el carácter es alfanumérico.
- ft_isalpha(int c); | Verifica si el carácter es alfabético.
- ft_isascii(int c); | Verifica si el carácter está en el conjunto ASCII.
- ft_isdigit(int c); | Verifica si el carácter es un dígito.
- ft_isprint(int c); | Verifica si el carácter es imprimible.
- ft_toupper(int c); | Convierte un carácter a mayúsculas.
- ft_tolower(int c); | Convierte un carácter a minúsculas.

## Manipulación de Memoria
- ft_memset(void *b, int c, size_t len); | Rellena la memoria con un byte constante.
- ft_bzero(void *s, size_t n); | Pone a cero un bloque de memoria.
- `ft_memcpy(void *dst, const void src, size_t n); | Copia un área de memoria.
- ft_memmove(void *dst, const void *src, size_t len); | Mueve un área de memoria.
- ft_memchr(const void *s, int c, size_t n); | Busca un carácter en un bloque de memoria.
- ft_memcmp(const void *s1, const void *s2, size_t n); | Compara dos bloques de memoria.

## Manipulación de Cadenas
- ft_strlen(const char *s); | Devuelve la longitud de una cadena.
- ft_strlcpy(char *dst, const char *src, size_t dstsize); | Copia una cadena en un búfer de tamaño definido.
- ft_strlcat(char *dst, const char *src, size_t dstsize); | Añade una cadena a otra, asegurando que el resultado quepa en un búfer de tamaño definido.
- ft_strchr(const char *s, int c); | Localiza la primera ocurrencia de un carácter en una cadena.
- ft_strrchr(const char *s, int c); | Localiza la última ocurrencia de un carácter en una cadena.
- ft_strncmp(const char *s1, const char *s2, size_t n); | Compara dos cadenas hasta n caracteres.
- ft_strnstr(const char *haystack, const char *needle, size_t len); | Localiza una subcadena en una cadena, donde la búsqueda se limita a los primeros caracteres len.
- ft_strdup(const char *s1); | Duplica una cadena.
- ft_strjoin(char const *s1, char const *s2); | Concatena dos cadenas en una nueva cadena.
- ft_striteri(char *s, void (*f)(unsigned int, char*)); | Aplica una función a cada carácter de una cadena.
- ft_substr(char const *s, unsigned int start, size_t len); | Extrae una subcadena de una cadena.
- ft_strtrim(char const *s1, char const *set); | Recorta el principio y el final de una cadena de cualquier conjunto de caracteres.
- ft_strmapi(char const *s, char (*f)(unsigned int, char)); | Aplica una función a cada carácter de una cadena para crear una nueva cadena.
- ft_split(char const *s, char c); | Divide una cadena en un arreglo de cadenas usando un carácter como delimitador.

## Asignación de Memoria
- ft_calloc(size_t count, size_t size); | Asigna memoria para un arreglo, inicializándolo a cero.

## Entrada/Salida
- ft_putchar_fd(char c, int fd); | Imprime un carácter al descriptor de archivo dado.
- ft_putstr_fd(char *s, int fd); | Imprime una cadena al descriptor de archivo dado.
- ft_putendl_fd(char *s, int fd); | Imprime una cadena al descriptor de archivo dado, seguido de un salto de línea.
- ft_putnbr_fd(int n, int fd); | Imprime un entero al descriptor de archivo dado.

## Conversión de Datos
- ft_atoi(const char *str); | Convierte una cadena a un entero.
- ft_itoa(int n); | Convierte un entero a una cadena.



