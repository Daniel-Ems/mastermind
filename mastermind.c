#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
char number[16];
size_t one_digit = strlen(number);
int first_digit = number[one_digit - 3];
//int my_num = 1234;
printf("Give me a number hombre");
fgets(number, sizeof(number), stdin); 
printf("%s\n", number);
printf("%d", first_digit); 


}
