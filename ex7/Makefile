CC = gcc
CFLAGS =  -pthread -Wall -Wextra -std=c11

SRC_FILE = lock.c

EXEC = prog

all : ${EXEC}
	./${EXEC}

${EXEC} : ${SRC_FILE}
	${CC} -g ${CFLAGS} $< -o $@ -fsanitize=address

clean : 
	rm -fr ${EXEC}
