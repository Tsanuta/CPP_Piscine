# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/12 18:31:21 by olidon            #+#    #+#              #
#    Updated: 2020/11/19 15:38:15 by olidon           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

HEADER			=		replace.hpp

SRCS			=		replace.cpp


OBJS			= 		${SRCS:.cpp=.o}

NAME			=		replace

FLAGS			+=		-Wall -Wextra -Werror -Wconversion

all				:		$(NAME)

%.o				:		%.cpp $(HEADER)
						clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME)			:		$(OBJS)
						clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean			:
						rm -f $(OBJS)

fclean			:		clean
						rm -f $(NAME) *.replace

re				:		fclean all

.PHONY			:		all clean fclean re
