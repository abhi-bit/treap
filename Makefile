CC=gcc

all: main.c treap.c
	$(CC) -o treap_test main.c treap.c
