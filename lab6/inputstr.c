#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {

	char str[20];
	//char *str;
	//size_t char_size = 20;
	//printf("please enter a string:\n");
	//scanf("%s",str); //This does not account for spaces
	//scanf("%[^\n]s",str); //This does account for spaces
	//gets(str); //Takes more than buffer but might crash
	fgets(str, 20, stdin); //Dumps more the the buffer
	//getline(&str,&char_size,stdin); //same as fgets but used malloc and pointers
	//printf("you entered: %s\n", str);


	//char str[80] = "This is - www.tutorialspoint.com - website";

	char *token;
	
	/* get the first token */
	token = strtok(str, ";");
	
	/* walk through other tokens */
	while( token != NULL ) {
		printf( " %s\n", token );
		
		token = strtok(NULL, ";");
	}

	
	

	return 0;
}
