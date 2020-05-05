
.PHONY: all clean fclean re lib

NAME	= test

SRC_DIR = ./src
INC_DIR = ./includes
OBJ_DIR = ./obj

SOURCES	= main.c ft_printf.c pr_putchar.c pr_while.c pr_read_specific.c void pr_output.c
INCLUDES = ft_printf.h
 	
SRC		= $(addprefix $(SRC_DIR)/,$(SOURCES))
INC		= $(addprefix $(INC_DIR)/,$(INCLUDES))
OBJ		= $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))

FT_LIB = libft/libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror 

all:  $(NAME)

$(NAME): $(OBJ) $(FT_LIB) ./libft/libft.a
	$(CC) $(CFLAGS) -L./libft -lft -I./libft $(OBJ) -o $(NAME)

obj/%.o: src/%.c $(INC) Makefile
	@mkdir -p obj
	$(CC) $(CFLAGS) -o $@ -c $< -I$(INC_DIR) -I./libft

$(FT_LIB):
	make -C ./libft

clean:		
	/bin/rm -f $(OBJ)
	make clean -C ./libft

fclean: 	clean
	make fclean -C ./libft
	/bin/rm -f $(NAME)

re: fclean all
