# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/12 18:31:21 by Tsanuta           #+#    #+#              #
#    Updated: 2020/12/14 16:27:28 by olidon           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

HEADER			=		header.hpp

SRCS			=		main.cpp		\
						serialize.cpp

OBJS			= 		${SRCS:.cpp=.o}

NAME			=		serialize

FLAGS			+=		-g3 -Wall -Wextra -Werror -Wconversion -std=c++98

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
