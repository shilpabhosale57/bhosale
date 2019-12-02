main:main.o push.o pop.o display.o
	gcc -o main main.o push.o pop.o display.o

main.o:main.c
	gcc -o main.o -C main.c

push.o:push.c
	gcc -o push.o -C push.c

pop.o:pop.c
	gcc -o pop.o -C pop.c

display.o:display.c
	gcc -o display.o -C display.c


