#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]){
    

    if (argc < 2){
        printf("No file name is passed");
        return 1;
    }

    FILE * stream = fopen(argv[1], "r");

    if (stream == NULL){
        printf("No such file exist in this current directory");
    }


    int countnewlines = 0;
    char readline = fgetc(stream);

    while (readline != EOF && countnewlines < 10){

        printf("%c",readline);
        

        if (readline == '\n' ){
            countnewlines ++;
        }

        readline = fgetc(stream);
    }








}

