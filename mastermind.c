#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <time.h>



void number_strip(char array[]);
int main(void)
{

//random number generated, 
time_t t;
srand((unsigned) time(&t));

//user input for random number

char users[10];
printf("Please give me a number: "); 
strtol(fgets(users, sizeof(users), stdin),NULL, 10);

number_strip(users);
   
printf("%d, %d, %d, %d\n", 	users[0], users[1], users[2], users[3]);

char numbers[5] = "1779";

number_strip(numbers);

printf("%d, %d, %d, %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);


int red_counter = 0;
int white_counter = 0;


int a = 1;
int b = 2;
int c = 0;
int d = 3;


for(a=0; a<4; a++){
	if(users[a] == numbers[a]){
		red_counter += 1;
	}
}


if((users[c] == numbers[a] || users[c] == numbers[b] || users [c] == numbers[d]) && (users[c] != numbers[c])){
	white_counter += 1;
}
if((users[b] == numbers[a] || users[b] == numbers[c] || users [b] == numbers [d]) && (users[b] != numbers[b])){
	white_counter += 1;	
}
if((users[a] == numbers[c] || users[a] == numbers[b] || users [a] == numbers[d]) && (users[a] != numbers[a])){
	white_counter += 1;	
}
if((users[d] == numbers[a] || users[d] == numbers[b] || users [d] == numbers [c]) && (users[d] != numbers[d])){
	white_counter += 1;	

}

printf(" %d:white, %d:red\n", white_counter, red_counter);

}

void number_strip(char array[])
{
	int a = 0;
	for(a=0; a < 4; a++){
		array[a] = array[a]-48;
	}
	return;
}



