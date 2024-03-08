CC = gcc
CFLAGS =  -Wall -Wextra -std=c11

SRC_FILE = somme.c

EXEC = prog

all : ${EXEC}
	./${EXEC}

${EXEC} : ${SRC_FILE}
	${CC} -g ${CFLAGS} $< -o $@ -fsanitize=address

clean : 
	rm -fr ${EXEC}
