##
## Makefile for Makefile in /home/debrau_c/rendu/try_lapin
## 
## Made by Carl DEBRAUWERE
## Login   <debrau_c@epitech.net>
## 
## Started on  Thu Oct 15 12:00:18 2015 Carl DEBRAUWERE
## Last update Tue Jan 10 23:25:31 2017 Carl DEBRAUWERE
##

SRC		= main.cpp		\
		  Federation.cpp	\
		  WarpSystem.cpp	\
		  Borg.cpp

CC		= g++

OBJ		= $(SRC:.cpp=.o)

RM		= rm -f

NAME		= my_cat

CPPFLAGS	+= -Iinc/ -Wall -Wextra -Werror -std=c++03 -W

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all :	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
