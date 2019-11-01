#include <pthread.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct thread_args{
    int * a;
    int start;
    int finish;
};

void * random_list(void *_args)
{
    struct thread_args *args = (struct thread_args *) _args;
    printf("Start: %d, Finish: %d\n", args->start, args->finish);

    for(int i=0; i<100000; i++){
        args->a[i%100000] = i;
    }
    printf("%s\n","Finished");


    return NULL;
}


int
main(int argc, char *argv[])
{
	pthread_t t1;
	void *res;
	int s;

	srand(time(NULL));

	//int a[1000000000];
	int *a = malloc(100000*sizeof(int));
	if (a == NULL) {
		perror("error: memory failure");
		exit(EXIT_FAILURE);
	}

    struct thread_args args = { a, 0 ,  100000};

    pthread_create(&t1, NULL, random_list, &args);

    pthread_join(t1, NULL);


	free (a);
	exit(EXIT_SUCCESS);
}
