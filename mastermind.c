#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

void rand_function( char array []);
void number_strip(char array[]);
int main(void)
{

time_t t;
srand((unsigned) time(&t));

char user_guess[8];
char guess_holder[8];
char secret_number[8] ;
rand_function(secret_number);
int counter = 0;


while(1)
{

	int red_counter = 0;
	int white_counter =0;
	
	
	char number_holder[8];
	

	strncpy(number_holder,secret_number,8);

	printf("\nPlease give me a number: "); //<<<<<<<<<<<<<<<<<
	fgets(user_guess, sizeof(user_guess), stdin);

	user_guess[6]='\0';
	
	counter += 1;
	strncpy(guess_holder,user_guess,8);
	printf("%s\n", secret_number); //<<<<<<<<<<<<<<<<<<<<<<<<<

	int a,b;

	for(a=0; a<4; a++){
		if(user_guess[a] == secret_number[a]){
			red_counter += 1;
			guess_holder[a] = 'R';
			number_holder[a] = 'W';
		}
	}

	for(a=0; a<4; a++){
		for(b=0; b<4; b++){
			if(guess_holder[a] == number_holder[b]){
				white_counter +=1;					
				number_holder[b] = 'W'; 
				guess_holder[a] = 'x';
				
			}
		}
	}

	if(red_counter == 4){
		break;
	}
	printf("%d:white, %d:red\n", white_counter, red_counter); //<<<<<<<<<<<<<
 
}
printf("it took you %d guesses\n", counter);
printf("You won\n");
}

void rand_function(char array[])
{
	for(int a = 0; a < 4; a++){
		array[a] = rand () % 10 +48;
	}
	array[5] = '\0';
	return;
}




	


