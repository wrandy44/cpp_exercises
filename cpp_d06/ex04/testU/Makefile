##
## Makefile for Makefile in /home/debrau_c/rendu/try_lapin
## 
## Made by Carl DEBRAUWERE
## Login   <debrau_c@epitech.net>
## 
## Started on  Thu Oct 15 12:00:18 2015 Carl DEBRAUWERE
## Last update Mon Jan  9 20:13:34 2017 Carl DEBRAUWERE
##

SRC		= main.cpp	\
		  sickkoala.cpp	\
		  koalanurse.cpp \
		  koaladoctor.cpp

CC		= g++

OBJ		= $(SRC:.cpp=.o)

RM		= rm -f

NAME		= xxx

CXXFLAGS	= -Iinc/ -Wall -Wextra -Werror -std=c++03

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAG)

all :	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
