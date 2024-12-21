# Nombre del archivo que se generará al final de la ejecución
NAME = libft.a

# Archivos fuente y archivos objeto (a partir de los fuente)
SRC = \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_itoa.c ft_strjoin.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_strchr.c ft_strdup.c ft_striteri.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivo de encabezado
INCLUDE = libft.h

# Crear bibliotecas
AR = ar crs

# Regla que lo compila todo "all"
all: $(NAME)

# Regla para crear nuestra biblioteca
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Regla que pasa archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Borrar archivos objeto
clean:
	rm -f $(OBJ)

# Eliminar todos los archivos .o y .a
fclean: clean
	rm -f $(NAME)

# Recompilar
re: fclean all

# Para que dejemos claro que lo siguiente no son archivos con esos nombres, sino reglas
.PHONY: all clean fclean re
