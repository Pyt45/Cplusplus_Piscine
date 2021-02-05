# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/05 16:35:48 by aaqlzim           #+#    #+#              #
#    Updated: 2021/02/05 16:35:49 by aaqlzim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook

SRCS := AddContact.cpp ClassContact.cpp PhoneBook.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)
HDRS := ClassContact.hpp
CXX := g++
CXXFLAGS := -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re:     fclean all