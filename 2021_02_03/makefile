.PHONY:all
all:mytest
mytest:test.c stack.h stack.c
	gcc -o $@ $^ -g -std=c99
.PHONY:clean
clean:
	rm -f mytest