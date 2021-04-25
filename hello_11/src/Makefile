CC = gcc
CFLAGS = -Wall -g -std=c99
LDFLAGS = -lm
LIB_DIR = ../lib
BIN_DIR = ../bin

test: test.o node.o
	$(CC) $(LDFLAGS) -o $(BIN_DIR)/$@ $(LIB_DIR)/node.o $(LIB_DIR)/test.o

node.o: node.c node.h
	$(CC) $(CFLAGS) -o $(LIB_DIR)/$@ -c $<

test.o: test.c node.h
	$(CC) $(CFLAGS) -o $(LIB_DIR)/$@ -c $<