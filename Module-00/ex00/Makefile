NAME = megaphone

SRCS = megaphone.cpp
FLAGS = -Wall -Wextra -Werror
cc = g++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(cc) $(FLAGS) $(OBJS) -o $(NAME)

run:
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)