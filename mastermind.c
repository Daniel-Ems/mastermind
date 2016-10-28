#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
//printf("Give me a number hombre");

//variables assigned for integers, and variables assigned for positions
//TODO: i, j, k need to be a random 4 digit integer.


//TODO: these need to become user inputs 
char users[10];

fgets(users, sizeof(users), stdin);

int a = 1;
int b = 2;
int c = 0;
int d = 3;
   
printf("%c, %c, %c, %c \n", users[a], users[b], users[c], users[d]);


//TODO: I need to find out how to take a four digit number and turn it in
//to single digits and then insert them in the arrays, once they are in 
// the arrays... i win
char numbers[10] = "1234";


//TODO: these values will conceptually work with the user array and random array




//TODO: need counter for red and white increments
//TODO: need a better way to inititate reds and whites without the other if need be 
int red_counter = 0;
int white_counter = 0;


//TODO: You need to use these if statements in a function
//could possibly call it red_test
if(users[c] == numbers[c]){
	red_counter += 1;	

}
//debugging printf
printf("users[c]:%c, numbers[c]:%c\n", users[c], numbers[c]);
if (users[b] == numbers[b]){
	red_counter += 1;
	
}

//debugging printf
printf("users[b]:%c, numbers[b]:%c\n", users[b], numbers[b]);
if(users[a] == numbers[a]){
	red_counter +=1; 
	
}
printf("users[d]:%c, numbers[d]:%c\n", users[d], numbers[d]);
if(users[d] == numbers[d]){
	red_counter +=1; 
	
}

//debugging printf
printf("users[a]:%c, numbers[a]:%c\n", users[a], numbers[a]);

//TODO: you need to use these if statements in a function
// could possibly call it White_test
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


