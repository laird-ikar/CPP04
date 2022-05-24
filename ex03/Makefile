# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 07:31:21 by bguyot            #+#    #+#              #
#    Updated: 2022/05/24 08:08:20 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex02.exe
SRCS 		=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp			\
				MateriaSource.cpp
SRCS_ABS	=	main_abs.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS 		=	${SRCS:.cpp=.o}
OBJS_ABS 	=	${SRCS_ABS:.cpp=.o}
CCXX		=	@c++
RM			=	@rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address

.cpp.o :
	$(CCXX) -c $(CXXFLAGS) -o $@ $<

all: $(NAME)

$(NAME):	$(OBJS)
	$(CCXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@printf "\e[36m\tCompilation \t[ ✓ ]\n\e[39m"

error: $(OBJS_ABS)
	$(CCXX) $(CXXFLAGS) -o $(NAME) $(OBJS_ABS)
	@printf "\e[36m\tCompilation \t[ ✓ ]\n\e[39m"

clean:
	$(RM) $(OBJS)
	@printf "\e[31m\tClean \t\t[ ✓ ]\n\e[39m"

fclean: clean
	$(RM) $(NAME)
	@printf "\e[35;5;161m\tBinary Clean \t[ ✓ ]\n\e[39m"

re: fclean all

.PHONY: all clean fclean re
