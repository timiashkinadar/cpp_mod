NAME	= sed_is_for_losers

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

CC		= g++

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

${NAME}:	${OBJS}
				@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.cpp.o:
				@${CC} ${CFLAGS} -c $< -o $@

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all