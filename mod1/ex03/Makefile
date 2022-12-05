NAME	= unnecessary_violence

SRCS	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS	= ${SRCS:.cpp=.o}

HEADER	= Weapon.h HumanB.h HumanA.h

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