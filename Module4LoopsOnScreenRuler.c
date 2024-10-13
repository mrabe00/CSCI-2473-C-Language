/*
Programmer Name:    Matthew Rabe
Date:               10-13-2024
Program:            Project 4 like Example for loops
*/

#include<stdio.h>

int main()
{
char main_char = '-';
char alt_char = '+';
int user_ruler_size = 0;
int counter = 0;

int sum_rule_size = 0;

float average_ruler_size = 0.0;

printf("Please enter the size ruler required: ");
while(scanf("%d",&user_ruler_size))

{

int cur_char = 0;
printf("You requested a ruler of size: %d\n",user_ruler_size);
printf("Please enter the size ruler required (Q to quit): \n");

// print the actual ruler in the body of the for loop

for(cur_char = 0;cur_char<=user_ruler_size;cur_char++)
    {
    if(cur_char % 5 == 0)
        {
        printf("%c",alt_char);
        }
        else
        {
        printf("%c",main_char);
        }
    }
printf("\n");
sum_rule_size = sum_rule_size + user_ruler_size;
counter ++;
}
average_ruler_size = sum_rule_size / counter;
printf("You printed %d rulers!",counter);
printf("The average size was %.2f",average_ruler_size);

return 0;
}