# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Tsanuta <Tsanuta@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/12 18:31:21 by Tsanuta           #+#    #+#              #
#    Updated: 2020/10/16 14:54:33 by Tsanuta          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

HEADER			=		ClassContact.hpp	\
						CheckFormat.hpp

SRCS			=		phonebook.cpp	\
						ClassContact.cpp\
						CheckFormat.cpp

OBJS			= 		${SRCS:.cpp=.o}

NAME			=		PhoneBook2000

FLAGS			+=		-Wall -Wextra -Werror -Wconversion -std=c++98 -fsanitize=address

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
