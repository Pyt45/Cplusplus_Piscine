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