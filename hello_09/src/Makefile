CC = gcc
CFLAGS = -Wall -g -std=c99
LDFLAGS = -lm
LIB_DIR = ../lib
BIN_DIR = ../bin

circle: circle.o circulararea.o
	$(CC) $(LDFLAGS) -o $(BIN_DIR)/$@ $(LIB_DIR)/circle.o $(LIB_DIR)/utils/circulararea.o

circle.o: circle.c utils/my.h
	$(CC) $(CFLAGS) -o $(LIB_DIR)/$@ -c $<

circulararea.o: utils/circulararea.c
	$(CC) $(CFLAGS) -o $(LIB_DIR)/utils/$@ -c $<