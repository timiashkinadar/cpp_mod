NAME	= BraiiiiiiinnnzzzZ...

SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS	= ${SRCS:.cpp=.o}

HEADER	= Zombie.h

CC		= g++

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

${NAME}:	${OBJS}
				@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o:%.cpp		${HEADER}
				@${CC} ${CFLAGS} -c $< -o $@

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all