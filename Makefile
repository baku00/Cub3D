NAME = Cub3D

SRC = main.c \
	checkers/arguments/arguments.c \
	checkers/map/map_name.c \
	class/map/map.c \
	class/element/element.c \
	class/wall/wall.c \
	get_next_line/get_next_line.c

OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -fsanitize=address

LIBFT = ./libft
LIBFT_A = $(LIBFT)/libft.a

INCLUDES = -I.

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_A) $(INCLUDES) -o $(NAME)

$(LIBFT_A):
	make -C $(LIBFT)

clean:
	make clean -C $(LIBFT)
	@rm -rf $(OBJS)

fclean: clean
	make fclean -C $(LIBFT)
	@rm -rf $(NAME)

re: fclean all