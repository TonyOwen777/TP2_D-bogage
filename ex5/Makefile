CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC_FILE = overflow.c

EXEC = prog

all : ${EXEC}
	./${EXEC}

${EXEC} : ${SRC_FILE}
	${CC} -g ${CFLAGS} $< -o $@ 

clean : 
	rm -fr ${EXEC}
