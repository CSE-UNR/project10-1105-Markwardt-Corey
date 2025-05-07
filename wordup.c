//Corey Markwardt-Abrigo
//Date:
//Project10


#include <stdio.h>
#define W 6
#define C 12
#define FILENAME "word.txt"

void filegetter(char wordle[]);
void response(int num, char boggle[]);
/*void();
void();
void();
void();
*/
int main(){
	int num = 0;
	char wordle[W];
	char boggle[C][W];
	
	filegetter(wordle);
	
	for(int num = 0;num < C - 2;num += 2){	
		response(num, boggle[num]);
	
		for(int colind = 0;colind < W;colind++){
			//filegetter(wordle);
			boggle[num][colind]; 
			if(boggle[num][colind] == wordle[colind]){
				boggle[num][colind] = colind - 32;
			}
			for(int index = 0; index < W;index++){
				if(boggle[num][colind] == wordle[index]){
					boggle[num+1][colind] = '^';
		
				}
			printf("%s", boggle);
			
			}	
		}*/
	//printf("%s", boggle[C][W]);
	//}
	return 0; 
}

void filegetter(char wordle[]){
	FILE* wrded;
	wrded = fopen(FILENAME, "r");
	
	if (wrded == NULL) {
		printf("Could not open \n");
		//return 0;
	}
	
	fscanf(wrded, "%s", wordle);
	fclose(wrded);
	//return enter;
}

void response(int num, char boggle[]){
	int counter;
	counter = 0;
	
	for(int num = 0; num < W -1;num++){
		printf("Guess %d! Enter your guess: ", num+1);
			scanf("%s", boggle);
		do{
		counter = 0;	
		for(int i = 0;boggle[i] != '\0'; i ++){
			counter++;
		}
		
			if(counter < 5){
				printf("Your guess must be 5 letters long.\n");
				printf("Please try again: ");
				scanf("%s", boggle);	
			}
			
			else if(counter > 5) {
				printf("Your guess must be 5 letters long.\n");
				printf("Please try again: ");
				scanf("%s", boggle);
			}	
			
		//printf("%s", boggle[num]);
		}while(counter != 5);
	printf("%s", boggle[num]);
	}
	
}

 
/*
void();





void();





void();








void finalguess(char boggle){

for(int num = 0; num < W -1;num++){
		printf("Your final guess is: ");
			scanf("%s", boggle);
		do{
		counter = 0;	
		for(int i = 0;boggle[i] != '\0'; i ++){
			counter++;
		}
		
			if(counter < 5){
				printf("Your guess must be 5 letters long.\n");
				printf("Please try again: ");
				scanf("%s", boggle);	
			}
			
			else if(counter > 5) {
				printf("Your guess must be 5 letters long.\n");
				printf("Please try again: ");
				scanf("%s", boggle);
			}	
			
			
		}while(counter != 5);
	
	}

}

*/






