
// Tutorial Week 4 Question 10
// Written by Catherine Cheng z5310517

// Here is a program change_number.c, what will this code print before and after the function is called?

#include <stdio.h>

void change_number(int num);

int main(void) {

    int num;
  
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function: %d\n", num);
    num = change_number(num); // pass by value - we aren't giving it the variable, we are giving it the value of 5 
    printf("After function: %d\n", num);

    return 0;
}

// Change the given variable "num" to be the value 10
void change_number(int num) {
    num = 10;
}

// to change num, change function to int return type

int change_number(int num) {
    return 10;
}
