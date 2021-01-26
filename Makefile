##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## MAKEFILE for fonction
##

NAME = 	libmy.a

SRC =	lib/my/my_putchar.c              \
	lib/my/my_putstr.c               \
	lib/my/my_strlen.c		 \
	lib/my/my_revstr.c		 \
	lib/my/my_getnbr.c		 \
	lib/my/my_strcpy.c		 \
	lib/my/my_put_nbr.c		 \
	partionner.c			 \
	push_swap.c

OBJ	=	$(SRC:.c=.o)


NAME	=	push_swap

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	cd lib/my/ ; $(NAME) -f Makefile clean

fclean: clean
	rm -f $(NAME)

re:	fclean all
