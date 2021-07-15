# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/12 18:31:21 by Tsanuta           #+#    #+#              #
#    Updated: 2020/11/30 17:51:40 by olidon           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

HEADER			=		ScalarConversion.hpp

SRCS			=		main.cpp				\
						ScalarConversion.cpp

OBJS			= 		${SRCS:.cpp=.o}

NAME			=		convert

FLAGS			+=		-Wall -Wextra -Werror -Wconversion -std=c++98

all				:		$(NAME)

%.o				:		%.cpp $(HEADER)
						clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME)			:		$(OBJS)
						clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean			:
						rm -f $(OBJS)

fclean			:		clean
						rm -f $(NAME)

re				:		fclean all

.PHONY			:		all clean fclean re
