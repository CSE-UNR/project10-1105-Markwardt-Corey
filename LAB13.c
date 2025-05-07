//Corey Markwardt-Abrigo
//05APR2025
//Lab13 



#include <stdio.h>
#define FILENAME "planets.txt"
#define NUM_ROWS 15
#define NUM_COLS 60

int main(){

	char language[NUM_ROWS][NUM_COLS];

// add file IO stuff

	FILE* fptr = fopen(FILENAME, "r");

	if(fptr == NULL){

	printf("nope\n");

	return 0;
	}

	int size = 0;

	while(fscanf(fptr, "%s", language[size]) == 1){

	size++;

}

fclose(fptr);
char response;
for(int index = 0; index < size; index++){
	printf("What letter would you like the planets to start with?");
	scanf("%c", &response);
if(language[index][0] == response){

printf("%s\n", language[index]);
}
}
return 0;
}

