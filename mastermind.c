#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
//printf("Give me a number hombre");

//variables assigned for integers, and variables assigned for positions
//TODO: i, j, k need to be a random 4 digit integer.


time_t t;
srand((unsigned) time(&t));

char users[10];
strtol(fgets(users, sizeof(users), stdin),NULL, 10);

int a = 1;
int b = 2;
int c = 0;
int d = 3;
users[a]=users[a]-48;
users[b]=users[b]-48;
users[c]=users[c]-48;
users[d]=users[d]-48;
   
printf("%d, %d, %d, %d\n", 	users[a], users[b], users[c], users[d]);


//TODO: I need to find out how to take a four digit number and turn it in
//to single digits and then insert them in the arrays, once they are in 
// the arrays... i win
char numbers[5] = "1779";
numbers[a]=numbers[a]-48;
numbers[b]=numbers[b]-48;
numbers[c]=numbers[c]-48;
numbers[d]=numbers[d]-48;

 //{rand() % 10, rand() % 10, rand() % 10, rand() % 10};
 //tutorialspoint.com and stack overflow
//printf("numbers %d %d %d %d\n", numbers[a],numbers[d],numbers[c],numbers[b]);	


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
printf("users[c]:%d, numbers[c]:%d\n", users[c], numbers[c]);
if (users[b] == numbers[b]){
	red_counter += 1;
	
}

//debugging printf
printf("users[b]:%d, numbers[b]:%d\n", users[b], numbers[b]);
if(users[a] == numbers[a]){
	red_counter +=1; 
	
}
printf("users[d]:%d, numbers[d]:%d\n", users[d], numbers[d]);
if(users[d] == numbers[d]){
	red_counter +=1; 
	
}

//debugging printf
printf("users[a]:%d, numbers[a]:%d\n", users[a], numbers[a]);

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


