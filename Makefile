NAME := libp.a
CC := gcc
CFLAGS := -c -Wall -Wextra -Werror
SRC_DIR := src/
OBJ_DIR := bin/
INCLUDES := -I./include

SRCS =	abs.c \
		atoi.c \
		bzero.c \
		calloc.c \
		isalnum.c \
		isalpha.c \
		isascii.c \
		isdigit.c \
		isprint.c \
		isspace.c \
		itoa.c \
		lstadd.c \
		lstdel.c \
		lstdelone.c \
		lstiter.c \
		lstmap.c \
		lstnew.c \
		min.c \
		max.c \
		memalloc.c \
		memccpy.c \
		memchr.c \
		memcmp.c \
		memcpy.c \
		memdel.c \
		memmove.c \
		memset.c \
		nbrlen.c \
		putchar.c \
		putchar_fd.c \
		putendl.c \
		putendl_fd.c \
		putnbr.c \
		putnbr_fd.c \
		putstr.c \
		putstr_fd.c \
		strcat.c \
		strchr.c \
		strclr.c \
		strcmp.c \
		strcpy.c \
		strdel.c \
		strdup.c \
		strddup.c \
		strdsub.c \
		strequ.c \
		striter.c \
		striteri.c \
		strjoin.c \
		strlcat.c \
		strlen.c \
		strnlen.c \
		strdlen.c \
		strmap.c \
		strmapi.c \
		strncat.c \
		strncmp.c \
		strncpy.c \
		strnequ.c \
		strnew.c \
		strnstr.c \
		strrchr.c \
		strsplit.c \
		strstr.c \
		strsub.c \
		strtrim.c \
		swapcase.c \
		tolower.c \
		toupper.c \
		get_next_line.c

OBJS = $(addprefix $(OBJ_DIR),$(SRCS:.c=.o))

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | dir
	@$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

$(NAME): $(OBJS)
	@ar rcs $@ $^

dir:
	@mkdir -p $(OBJ_DIR)
clean:
	@/bin/rm -rf $(OBJ_DIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean dir so
