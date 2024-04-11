NAME := libp.a
CC := gcc
CFLAGS := -c -Wall -Wextra -Werror
SRCDIR := src/
OBJDIR := bin/
INCLUDES := -I./include

SRCS := $(wildcard $(SRCDIR)*.c)
OBJS := $(SRCS:$(SRCDIR)%.c=$(OBJDIR)%.o)

all: $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

$(NAME): $(OBJS)
	@ar rcs $@ $^

clean:
	@/bin/rm -rf $(OBJDIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean dir so
