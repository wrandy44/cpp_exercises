##
## Makefile for Makefile in /home/debrau_c/rendu/try_lapin
## 
## Made by Carl DEBRAUWERE
## Login   <debrau_c@epitech.net>
## 
## Started on  Thu Oct 15 12:00:18 2015 Carl DEBRAUWERE
## Last update Mon Jan  9 17:16:49 2017 Carl DEBRAUWERE
##

SRC		= main.cpp

CC		= g++

OBJ		= $(SRC:.cpp=.o)

RM		= rm -f

NAME		= my_convert_temp

CXXFLAGS	= -Iinc/ -Wall -Wextra

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAG)

all :	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
