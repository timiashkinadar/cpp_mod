NAME	= the_job_of_your_dreams

SRCS	= Account.cpp tests.cpp

OBJS	= ${SRCS:%.cpp=%.o}

HEADER	= Account.h

CC		= g++

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

.cpp.o:		${HEADER}
				${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
				@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all