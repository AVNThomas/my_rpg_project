##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC =	$(wildcard src/*.c)		\

OBJ	=	$(SRC:.c=.o)			\

NAME	=	my_rpg

CFLAGS	=	-I./include/ -g -Wall -Wextra

LDFLAGS	=	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
		$(RM) *~ vgcore*
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.Phony: all clean fclean re