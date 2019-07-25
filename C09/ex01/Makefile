NAME = libft.a

SRCS = $(wildcard srcs/*.c)

OUT = $(wildcard srcs/*.o)

$(NAME):
	    gcc -Wall -Wextra -Werror -c $(SRCS)
		ar rc $(NAME) *.o
		
all:
	 cp *.o /srcs/
	 rm *.o

clean:
	    rm -rf $(OUT)

fclean:    clean
	    /rm -rf $(NAME)
