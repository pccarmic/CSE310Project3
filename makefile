CC = g++
CFLAGS = -g -c -Wall

all: dijkstra

dijkstra: main.o heap.o graph.o util.o
	$(CC) main.o heap.o graph.o util.o -o dijkstra

main.o:
	$(CC) $(CFLAGS) main.cpp

heap.o:
	$(CC) $(CFLAGS) heap.cpp

graph.o:
	$(CC) $(CFLAGS) graph.cpp

util.o:
	$(CC) $(CFLAGS) util.cpp

clean:
	rm -rf *o dijkstra