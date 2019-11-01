all: dummy.c thread_args.c thread_create.c thread_no_join.c thread_ret2.c

clean:
	rm -f dummy.c thread_args.c thread_create.c thread_no_join.c thread_ret2.c


dummy: dummy.c
	gcc -o dummy  dummy.c -Wall 

thread_args: thread_args.c
	gcc -o thread_args thread_args.c -Wall -lpthread

thread_create: thread_create.c
	gcc -o thread_create thread_create.c -Wall -lpthread

thread_no_join: thread_no_join.c
	gcc -o thread_no_join thread_no_join.c -Wall -lpthread

thread_ret2: thread_ret2.c
	gcc -o thread_ret2 thread_ret2.c -Wall -lpthread

