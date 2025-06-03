# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/02 12:17:17 by javierzarag       #+#    #+#              #
#    Updated: 2025/06/02 12:40:06 by javierzarag      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = Contact.cpp main.cpp Phonebook.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re