NAME	= megaphone

SRCS	= megaphone.cpp

OBJS	= ${SRCS:%.c=%.o}

CC		= g++

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all