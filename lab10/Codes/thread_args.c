/* hello_args_pthread.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <pthread.h>


void * hello_arg(void * args){

  char * str = (char *) args;

  printf("%s\n", str);

  return NULL;
}

void * hello_arg_int(void * args){

  int * str = (int *) args;

  printf("%d\n", *str);

  return NULL;
}

int main(int argc, char * argv[]){

  char hello[] = "Hello World!";
	int x = 33;

  pthread_t t1, t2;  //thread identifier

  //create a new thread that runs hello_arg with argument hello
  pthread_create(&t1, NULL, hello_arg, hello);
  pthread_create(&t2, NULL, hello_arg_int, &x);

  //wait until the thread completes
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);

  return 0;
}
