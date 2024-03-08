CC = gcc
CFLAGS =  -Wall -Wextra -std=c11

SRC_FILES = ${wildcard *.c}

EXEC = prog

all : ${EXEC}
	rm -fr *.ppm
	./${EXEC}


${EXEC} : ${SRC_FILES}
	${CC} -g ${CFLAGS} $^ -o $@

clean : 
	rm -fr ${EXEC}