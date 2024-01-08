
CC=g++
CFLAGS=-Wall -Wextra

clean:
	rm -rfv ./bin/*

ll:
	$(CC) -o ./bin/ll $(CFLAGS) ./LinkList/*.cpp && ./bin/ll


