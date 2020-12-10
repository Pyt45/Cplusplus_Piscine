NAME := megaphone

SRCS := megaphone.cpp
OBJS := $(SRCS:.cpp=.o)

CXX := g++
CXXFLAGS := -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "[INFO] $(OBJS) removed!"

fclean: clean:
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re: fclean all
.PHONY: all clean fclean format re
