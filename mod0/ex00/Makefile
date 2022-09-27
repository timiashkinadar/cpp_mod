NAME	= megaphone

SRCS	= megaphone.cpp

OBJS	= ${SRCS:%.cpp=%.o}

CC		= c++

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

.cpp.o:
				${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
				@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all