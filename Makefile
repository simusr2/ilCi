TARGETS = 01.HelloWorld 02.InputOutput

.PHONY: all clean

%.out: %.c
	gcc -Wall -pedantic -o $@ $<

all: $(TARGETS)

01.HelloWorld: 01.HelloWorld/ciaociao.out 01.HelloWorld/hello.out 01.HelloWorld/helloputs.out
	./01.HelloWorld/ciaociao.out
	./01.HelloWorld/hello.out
	./01.HelloWorld/helloputs.out

02.InputOutput: 02.InputOutput/scanf.out 02.InputOutput/scanfchar.out
	echo "1" | ./02.InputOutput/scanf.out
	echo "01" | ./02.InputOutput/scanf.out
	echo "02" | ./02.InputOutput/scanf.out
	echo "86a" | ./02.InputOutput/scanfchar.out

clean:
	find . -name "*.out" -delete