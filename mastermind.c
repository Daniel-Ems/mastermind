#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <time.h>


void rand_function( char array []);
void number_strip(char array[]);
int main(void)
{


//random number generated, 
time_t t;
srand((unsigned) time(&t));

//user input for random number

char users[10];

//number_strip(users);
   
printf("%s\n:users", users);

char numbers[5] ;
rand_function(numbers);

//number_strip(numbers);

while(numbers != users){
	if(numbers == users){
		break;
	}
	printf("Please give me a number: "); 
	fgets(users, sizeof(users), stdin);

	printf("%s\n", numbers);


	int red_counter = 0;
	int white_counter = 0;


	int a = 1;
	int b = 2;
	int c = 0;
	int d = 3;

	char red_counts[5] = {'0','0','0','0','\0'} ;
	for(a=0; a<4; a++){
		if(users[a] == numbers[a]){
			red_counter += 1;
			red_counts[a] = users[a];
		}
	}
	
	if((users[c] == numbers[a] || users[c] == numbers[b] || users [c] == numbers[d]) && 		(users	[c] != numbers[c])){	
		white_counter += 1;
	}
	if((users[b] == numbers[a] || users[b] == numbers[c] || users [b] == numbers [d]) && 		(users	[b] != numbers[b])){	
		white_counter += 1;	
	}
	if((users[a] == numbers[c] || users[a] == numbers[b] || users [a] == numbers[d]) && 		(users	[a] != numbers[a])){
		white_counter += 1;	
	}
	if((users[d] == numbers[a] || users[d] == numbers[b] || users [d] == numbers [c]) && 		(users	[d] != numbers[d])){
		white_counter += 1;	

	}

	printf(" %d:white, %d:red\n", white_counter, red_counter);
	printf(" %s:red_counts", red_counts);
	}
}

void number_strip(char array[])
{
	int a = 0;
	for(a=0; a < 4; a++){
		array[a] = array[a]-48;
	}
	return;
}


void rand_function(char array[])
{
	for(int a = 0; a < 4; a++){
		array[a] = rand () % 10 +48;
		
	}
	return ;
}




	


