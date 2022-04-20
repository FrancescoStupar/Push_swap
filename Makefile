NAME	= push_swap

FLAGS	= -Wall -Wextra -Werror -fsanitize=address

HEADER	= push_swap.h

SRCS 	= main.c\
		  add_top.c\
		  delete_bottom.c\
		  delete_top.c\
		  duplicate.c\
		  get_integer.c\
		  number_links.c\
		  print_list.c\
		  push.c\
		  rank.c\
		  swap.c\
		  rotate.c\
		  rev_rotate.c\
		  sort.c\
		  sort2.c\
		  add_bottom.c\

OBJS	= $(SRCS:c=o)
			

CC		= gcc

RM		= rm -f

LIBFT 	= libft/libft.a

LIBFT_DIR = libft

all: $(NAME) 

/%.o: %.c
			$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) -L $(LIBFT_DIR) -lft

clean:
	rm -f $(OBJS)
	make -s clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make -s fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re