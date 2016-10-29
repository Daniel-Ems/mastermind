#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//

void rand_function( char array []);
void void_game(char array[]);
int main(void)
{

	printf("Only your first four digit's will be evaluated");
	
	//** see citations at bottom of code
	time_t t;
	srand((unsigned) time(&t));
	
	//128 used to prevent people flooding the buffer
	char user_guess[128];

	//** see citations at bottom of code
	char guess_holder[128];

	//The random number is called outside of the while loop to allow it to remain
	//unchanged throughout the program. 
	char secret_number[8] ;
	rand_function(secret_number);

	int guess_counter = 0;


	while(1)
	{

		int a,b;
		int red_counter = 0;
		int white_counter =0;	

		//strncpy is performed inside while loop so the scope is local to the while
		//loop and will reset with each guess.
		char number_holder[8];
		strncpy(number_holder,secret_number,8);
		
		//A goto is used here to account for improper values. 
		bad_values:
		printf("\nPlease give me a number: "); 
		fgets(user_guess, sizeof(user_guess), stdin);
		

		for(a=0; a<4; a++){
			if(user_guess[a] < 48 || user_guess[a] > 57){
				printf("Please give appropritate values\n");
				goto bad_values;
			} 
 		}
	
		
		guess_counter += 1;

		//The strncpy needs to happen here so that it's copied each time after user 
		//input
		strncpy(guess_holder,user_guess,128);
	
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
		//red counts found in the prior loop, and not modify the secret_number
		//or guessed_number.
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


/*citations

1)
the random number generation was found at.

		"tutorialspoint.com/c_standard_library/c_function_rand.htm"

2)
the idea of using strncpy to create place holders for both user_guess and 
secret_number was from Steven Solis. No code was copied. Rather Solis 
recommended I use strncpy in addition with what I was currently trying; to 
create an array of red flag values as they matched within my for loop. Strncpy 
allowed to create an array prior to evaluating the two, and to cross them off 
as i went along. 
*/

