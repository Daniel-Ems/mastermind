#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void rand_function( char array []);
void void_game(char array[]);
int main(void)
{

printf("Only your first four digit's will be evaluated");

time_t t;
srand((unsigned) time(&t));

char user_guess[128];
char guess_holder[128];

char secret_number[8] ;
rand_function(secret_number);

int guess_counter = 0;


while(1)
{

	int a,b;

	int red_counter = 0;
	int white_counter =0;
	
	
	char number_holder[8];
	strncpy(number_holder,secret_number,8);

	bad_values:
	printf("\nPlease give me a number: "); 
	fgets(user_guess, sizeof(user_guess), stdin);
	
	user_guess[6]='\0';
	for(a=0; a<4; a++){
		if(user_guess[a] < 48 || user_guess[a] > 57){
			printf("Please give appropritate values\n");
			goto bad_values;
		} 
 	}
	

	guess_counter += 1;
	strncpy(guess_holder,user_guess,128);

	//printf("%s\n", secret_number); 

	
	//Guess_holder and Number_holder are used to allow elimination of matched 
	//digits without altering the secret_number, or guessed_numbers.
	for(a=0; a<4; a++){
		if(user_guess[a] == secret_number[a]){
			red_counter += 1;
			guess_holder[a] = 'R';
			number_holder[a] = 'N';
		}
	}

	//Guess_holder and Number_holder are compared here in order to account for 
	for(a=0; a<4; a++){
		for(b=0; b<4; b++){
			if(guess_holder[a] == number_holder[b]){
				white_counter +=1;					
				number_holder[b] = 'W'; 
				guess_holder[a] = 'Y';
				
			}
		}
	}

	if(red_counter == 4){
		break;
	}
	printf("%d:white, %d:red\n", white_counter, red_counter); 
 
}
printf("Congratulations!\n You Won!\n");
printf("It only took you %d guesses\n", guess_counter);

}

void rand_function(char array[])
{
	for(int a = 0; a < 4; a++){
		array[a] = rand () % 10 +48;
	}
	array[5] = '\0';
	return;
}



