all: clean prep compile 

clean:
	rm -rf dist
prep:
	mkdir dist
compile: main.bin test1.bin test2.bin test3.bin test4.bin test5.bin test6.bin

main.bin:
	gcc -g src/main.c -o dist/main.bin
test1.bin:
	gcc -g src/test1.c -o dist/test1.bin
test2.bin:
	gcc -g src/test2.c -o dist/test2.bin
test3.bin:
	gcc -g src/test3.c -o dist/test3.bin
test4.bin:
	gcc -g src/test4.c -o dist/test4.bin
test5.bin:
	gcc -g src/test5.c -o dist/test5.bin
test6.bin:
	gcc -g src/test6.c -o dist/test6.bin
