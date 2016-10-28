#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
printf("Give me a number hombre");

//variables assigned for integers, and variables assigned for positions
int i = 1;
int j = 2;
int k = 3;

//user inputs 
int m = 3; //white value
int n = 2; //red value
int o = 4; // no value present
int numbers[10]={i,j,k};
int users[10]={m,n,o};

//user varible = a, position = b and c, values = ijk
int a = 1;
int b = 2;
int c = 0;
printf("%d\n", numbers[b] );

int red_counter = 0;
int white_counter = 0;

//TODO: need counter for red and white increments
//TODO: need a way to inititate reds and whites without the other if need be 
if(users[c] == numbers[c]){
	red_counter += 1;
	printf("users[c]:%d, numbers[c]:%d\n", users[c], numbers[c]);
}
if (users[b] == numbers[b]){
	red_counter += 1;
	printf("users[c]:%d, numbers[c]:%d\n", users[b], numbers[b]);
}
if(users[a] == numbers[a]){
	red_counter +=1; 
	printf("users[c]:%d, numbers[c]:%d\n", users[a], numbers[a]);
}
if((users[c] == i || users[c] == j || users [c] == k )&& (users[c] != users[c])){
	white_counter += 1;
}
if((users[b] == i || users[b] == j || users [b] == k) && (users[b] != users[b])){
	white_counter += 1;	
}
if((users[a] == i || users[a] == j || users [a] == k) && (users[a] != users[a])){
	white_counter += 1;	
}



printf("users: %d,%d,%d, numbers: %d, %d, %d, %d:white, %d\n:red", m,n,o,i,j,k, white_counter, red_counter);



}
