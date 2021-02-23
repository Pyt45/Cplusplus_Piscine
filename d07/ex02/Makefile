NAME := iter

SRCS := main.cpp
OBJS := $(SRCS:.cpp=.o)

CXX := g++
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