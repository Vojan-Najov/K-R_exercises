NAME = rotating_square

SRC = rotating_square.c

CC = gcc
RM = rm -f

CFLAGS = $(shell pkg-config --cflags glut)
LIBS = $(shell pkg-config --libs glut)
LIBS += -lGL

${NAME}:
	${CC} -o $@ ${CFLAGS} ${SRC} ${LIBS}
	
clean:
	${RM} ${NAME}
