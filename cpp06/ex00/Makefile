# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 13:37:45 by kanykei           #+#    #+#              #
#    Updated: 2022/11/11 19:11:55 by kanykei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH	=	src

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -MD

NAME	=	Convert
SRC		=	main.cpp Converter.cpp
OBJ		=	$(addprefix obj/,$(notdir $(SRC:.cpp=.o)))
INC		=	-I include

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ 
	@echo "Convert is complied"

obj/%.o : %.cpp  obj
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
	./$(NAME) 0
	@echo ---------------
	./$(NAME) nan
	@echo ---------------
	./$(NAME) 42.0f
	@echo ---------------
	./$(NAME) -inf
	@echo ---------------
	./$(NAME) +inf
	@echo ---------------
	./$(NAME) -42
	@echo ---------------
	./$(NAME) 42
	@echo ---------------
	./$(NAME) c
# Run tests ===========================