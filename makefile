default:
	gcc -Wall -o prog main.c input.c array.c strings.c -lm
debug:
	gcc -Wall -o prog -g main.c input.c array.c strings.c -lm
clean:
	rm -f prog
