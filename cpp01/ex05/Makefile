# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 13:37:45 by kanykei           #+#    #+#              #
#    Updated: 2022/11/02 23:57:33 by kanykei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH	=	src

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -MD

NAME	=	harl
SRC		=	main.cpp Harl.cpp
OBJ		=	$(addprefix obj/,$(notdir $(SRC:.cpp=.o)))
INCL	=	-I include

.SILENT:

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ 
	@echo "Harl is compiled"

obj/%.o : %.cpp  obj
	$(CC) $(CFLAGS) $(INCL) -c $< -o $@

obj :
	mkdir obj

clean :
	rm -rf obj

fclean : clean
	rm -f $(NAME)

re : clean all

.PHONY : all clean fclean re

# Run tests ===========================
check: $(NAME)
	./$(NAME)
# Run tests ===========================