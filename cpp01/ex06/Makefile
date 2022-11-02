# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 13:37:45 by kanykei           #+#    #+#              #
#    Updated: 2022/11/02 23:59:48 by kanykei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH	=	src

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -MD

NAME	=	harlFilter
SRC		=	main.cpp Harl.cpp
OBJ		=	$(addprefix obj/,$(notdir $(SRC:.cpp=.o)))
INCL	=	-I include

.SILENT:

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ 
	@echo "harlFilter is complied"

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
check:
	@/bin/echo "Expected  : [ WARNING ]"
	@/bin/echo "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
	@/bin/echo
	@/bin/echo "[ ERROR ]"
	@/bin/echo "This is unacceptable, I want to speak to the manager now."
	@/bin/echo
	@/bin/echo
	@/bin/echo -n "harlFilter: "
	@./$(NAME) "WARNING"
	@/bin/echo
	@/bin/echo
	@/bin/echo "Expected: [ Probably complaining about insignificant problems ]"
	@/bin/echo -n "harlFilter: "
	@./$(NAME) "The weather is so shitty!"
# Run tests ===========================