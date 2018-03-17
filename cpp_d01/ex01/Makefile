##
## Makefile for Makefile of sum_stdarg and display arg in /home/debrau_c/COURS/my_printf
## 
## Made by Carl DEBRAUWERE
## Login   <debrau_c@epitech.net>
## 
## Started on  Tue Nov  3 09:07:18 2015 Carl DEBRAUWERE
## Last update Thu Jan  5 09:05:00 2017 Carl DEBRAUWERE
##

NAME	= menger

RM	= rm -f

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -std=gnu99 -Werror

SRC	= main.c\
	  menger.c

CC	= gcc

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
