#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int
main(int argc, char *argv[])
{
	pthread_t t1;
	void *res;


	srand(time(NULL));
	int *a = malloc(100000*sizeof(int));
	if (a == NULL) {
		perror("error: memory failure");
		exit(EXIT_FAILURE);
	}


	for(int i=0; i<100000; i++)
		a[i%100000] = rand()%100000;


	free (a);
	exit(EXIT_SUCCESS);
}
