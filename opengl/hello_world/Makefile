NAME = hello_world

SRC = hello_world.c

CC = gcc
RM = rm -f

CFLAGS = $(shell pkg-config --cflags glut)
LIBS = $(shell pkg-config --libs glut)
LIBS += -lGL

${NAME}:
	${CC} -o $@ ${CFLAGS} ${SRC} ${LIBS}
	
clean:
	${RM} ${NAME}
