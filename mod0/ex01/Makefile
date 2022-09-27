NAME	= phonebook

SRCS	= main.cpp Phonebook.cpp Contact.cpp

OBJS	= ${SRCS:%.cpp=%.o}

HEADER	= Phonebook.h Contact.h

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