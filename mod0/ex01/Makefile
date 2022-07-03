NAME	= phonebook

SRCS	= main.cpp phonebook.cpp

OBJS	= ${SRCS:%.c=%.o}

HEADER	= phonebook.hpp

CC		= g++

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

.c.o:		${HEADER}
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all