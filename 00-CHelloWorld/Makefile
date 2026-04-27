CC = gcc
CFLAGS = -std=c23

all: hello.exe

hello.exe: hello.c
	$(CC) $(CFLAGS) hello.c -o hello.exe

run: hello.exe
	./hello.exe