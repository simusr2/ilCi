TARGETS = 01.HelloWorld

.PHONY: all clean

%.out: %.c
	gcc -o $@ $<

all: $(TARGETS)

01.HelloWorld: 01.HelloWorld/ciaociao.out 01.HelloWorld/hello.out 01.HelloWorld/helloputs.out
	./01.HelloWorld/ciaociao.out
	./01.HelloWorld/hello.out
	./01.HelloWorld/helloputs.out


clean:
	find . -name "*.out" -delete