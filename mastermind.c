#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


void rand_function( char array []);
void number_strip(char array[]);
int main(void)
{

time_t t;
srand((unsigned) time(&t));

char users[10];
char numbers[5] ;
rand_function(numbers);
int counter = 0;


while(users != numbers){

	int red_counter = 0;
	int white_counter =0;
	

	printf("\nPlease give me a number: "); //<<<<<<<<<<<<<<<<<
	fgets(users, sizeof(users), stdin);
	counter += 1;

	printf("%s\n", numbers); //<<<<<<<<<<<<<<<<<<<<<<<<<


	int a = 1;
	int b = 2;

	char red_counts[5] = {'0','0','0','0','\0'} ;
	char white_counts[5] = {'0','0','0','0','\0'};
	for(a=0; a<4; a++){
		if(users[a] == numbers[a]){
			red_counter += 1;
			red_counts[a] = users[a];
		}
	}

	for(a=0; a<4; a++){
		for(b=0; b<4; b++){
			if(users[a] == numbers[b] && users[a] != red_counts[b]){
				white_counts[a] = numbers[b]; 
				
			}
		}
	} 

	if(red_counter == 4){
		break;
	}

	printf(" %d:white, %d:red\n", white_counter, red_counter); //<<<<<<<<<<<<<
	printf(" %s:red_counts\n", red_counts);//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
	printf(" %s:white_counts", white_counts); 
	}
printf(" it took you %d guesses\n", counter);
printf("You won\n");
}

void rand_function(char array[])
{
	for(int a = 0; a < 4; a++){
		array[a] = rand () % 10 +48;
		
	}
	return;
}




	


