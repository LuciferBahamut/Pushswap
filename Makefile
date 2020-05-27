##
## EPITECH PROJECT, 2019
## makefile
## File description:
## push swap
##

NAME	=	push_swap

SRC	=	src/main.c \
		src/my_putstr.c \
		src/my_putchar.c \
		src/bubble_check.c \
		src/my_atoi.c \
		src/trans_char.c \
		src/sort.c \
		src/cmd_r.c \
		src/cmd_p.c \
		src/cmd_s.c \
		src/find_smallest.c

CC	=	gcc


DEFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS	=	-I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

TU	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *#
		rm -f *~
		rm -f src/*~
		rm -f include/*~
		rm -f *.gcda
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all TU clean fclean re
