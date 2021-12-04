SRCS = ft_printf.c check_flag.c print_int.c print_char.c print_string.c

OBJ = $(SRCS:.c=.o)
CFLAGS += -Wall -Werror -Wextra -I./include

NAME = libftprintf.a
LIB = libft.a

all = $(NAME)

${NAME} : ${OBJ}
	$(MAKE) -C  ./libft
	cp libft/libft.a ./$(NAME)
	ar -crs ${NAME} ${OBJ}
	ranlib $(NAME)

${OBJ} : $(SRCS) ft_printf.h

clean:
	rm -f ${OBJ} 

fclean: clean
	rm -f ${NAME}
	$(MAKE) clean -C ./libft

re: fclean all

.PHONY: all clean fclean re
