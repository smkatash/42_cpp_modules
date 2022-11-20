# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 13:37:45 by kanykei           #+#    #+#              #
#    Updated: 2022/11/09 21:34:02 by ktashbae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH	=	src

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -MD

NAME	=	Brains
SRC		=	main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ		=	$(addprefix obj/,$(notdir $(SRC:.cpp=.o)))
INC		=	-I include

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ 
	@echo "Brain is compiled"

obj/%.o : %.cpp | obj
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

obj :
	@mkdir obj

clean :
	@rm -rf obj

fclean : clean
	@rm -f $(NAME)

re : clean all

.PHONY : all clean fclean re

# Run tests ===========================
check: ./$(NAME)
	./$(NAME)
# Run tests ===========================