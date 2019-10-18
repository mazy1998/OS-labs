
all: fifo_read.c unamed_pipe.c fifo_write.c p4 inputstr

clean:
	rm -f fifo_read.c  unamed_pipe.c p3 p4 inputstr

fifo_read: fifo_read.c 
	gcc -o fifo_read  fifo_read.c -Wall

unamed_pipe: unamed_pipe.c
	gcc -o unamed_pipe unamed_pipe.c -Wall 

fifo_write: fifo_write.c
	gcc -o fifo_write fifo_write.c -Wall

p3: p3.c
	gcc -o p3 p3.c -Wall

p4: p4.c
	gcc -o p4 p4.c -Wall

