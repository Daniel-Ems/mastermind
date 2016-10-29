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

char users[10];
char fake_users[10];
char numbers[5] = "1779";
//rand_function(numbers);
int counter = 0;


while(users != numbers){

	int red_counter = 0;
	int white_counter =0;
	
	
	char fake_numbers[5];
	

	strncpy(fake_numbers,numbers,5);

	printf("\nPlease give me a number: "); //<<<<<<<<<<<<<<<<<
	fgets(users, sizeof(users), stdin);
	counter += 1;
	strncpy(fake_users,users,5);
	printf("%s\n", numbers); //<<<<<<<<<<<<<<<<<<<<<<<<<

	printf("%s fake_users\n", fake_users);
	printf("%s fake_numbers\n", fake_numbers);
	int a = 1;
	int b = 2;

	for(a=0; a<4; a++){
		if(users[a] == numbers[a]){
			red_counter += 1;
			fake_numbers[a] = 'q';
			users[a] = 'R';
		}
	}

	for(a=0; a<4; a++){
		for(b=0; b<4; b++){
			if(users[a] == fake_numbers[b]){
				white_counter +=1;					
				users[a] = 'z';
				fake_numbers[a] = 'W';
			}
		}
	} 
	if(red_counter == 4){
		break;
	}

	printf(" %d:white, %d:red\n", white_counter, red_counter); //<<<<<<<<<<<<<
	
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




	


