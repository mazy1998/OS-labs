/*hello_fopen.c*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  FILE * stream = fopen("helloworld.txt", "w");

  fprintf(stream, "Hello World!\n");

  fclose(stream);
}
