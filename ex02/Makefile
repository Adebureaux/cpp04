NAME        = program

SRCS        = srcs/main.cpp srcs/Animal.cpp srcs/Dog.cpp srcs/Cat.cpp srcs/WrongCat.cpp srcs/WrongAnimal.cpp srcs/Brain.cpp

OBJS        = ${SRCS:.cpp=.o}

RM          = rm -f

CFLAGS      = -Wall -Wextra -Werror -std=c++98

COMPILER    = c++

${NAME}: ${OBJS}
	${COMPILER} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
