CC=g++

CFLAGS=-c -Wall

all: build

build: main.o listaenlazada.o
	$(CC) main.o listaenlazada.o -o ListaEnlazada

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

listaenlazada.o: listaenlazada.cpp
	$(CC) $(CFLAGS) listaenlazada.cpp

