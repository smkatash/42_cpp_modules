# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 13:37:45 by kanykei           #+#    #+#              #
#    Updated: 2022/09/27 09:25:26 by kanykei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH	=	src

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -MD

NAME	=	DiamondTrap
SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ		=	$(addprefix obj/,$(notdir $(SRC:.cpp=.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ 
	@echo "DiamondTrap is complied"

obj/%.o : %.cpp  obj
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
check: ./$(NAME)
	./$(NAME)
# Run tests ===========================