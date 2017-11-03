all: foo.c
	gcc foo.c

run: foo.c
	gcc foo.c
	./a.out
