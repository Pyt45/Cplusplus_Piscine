# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 11:45:24 by aaqlzim           #+#    #+#              #
#    Updated: 2021/03/31 12:21:01 by aaqlzim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := whatever

SRCS := main.cpp
OBJS := $(SRCS:.cpp=.o)

CXX := clang++
CXXFLAGS := -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJS)
	@echo "\033[0;32m[INFO]:\033[0m Objects removed!"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;32m[INFO]:\033[0m $(NAME) removed!"

re: fclean all
