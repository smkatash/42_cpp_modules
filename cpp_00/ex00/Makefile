# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 09:42:52 by kanykei           #+#    #+#              #
#    Updated: 2022/09/14 18:02:50 by kanykei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH	=	src

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -MD

NAME	=	megaphone
SRC		=	megaphone.cpp
OBJ		=	$(addprefix obj/,$(notdir $(SRC:.cpp=.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ 
	@echo "megaphone is complied"

obj/%.o : %.cpp obj
	@$(CC) $(CFLAGS) -c $< -o $@

obj :
	@mkdir obj

clean :
	@rm -rf obj

fclean : clean
	@rm -f $(NAME)

re : clean all

.PHONY : all clean fclean re

# Run tests ===========================
check: $(NAME)
	@/bin/echo
	@/bin/echo "Expected  : SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
	@/bin/echo -n "Megaphone : "
	@./$(NAME) "shhhhh... I think the students are asleep..."
	@/bin/echo
	@/bin/echo "Expected  : DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
	@/bin/echo -n "Megaphone : "
	@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@/bin/echo
	@/bin/echo "Expected  : * LOUD AND UNBEARABLE FEEDBACK NOISE *"
	@/bin/echo -n "Megaphone : "
	@./$(NAME)
	@/bin/echo
# Run tests ===========================