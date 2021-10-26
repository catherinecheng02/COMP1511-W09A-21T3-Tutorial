// Tutorial Week 7 Question 4
// Written by Catherine Cheng z5310517

// Question 4
// Write a program sum_digits.c which reads characters from its input. 
//When the end of input is reached it should print a count of the number of 
// digits in its input and their sum.

//The only functions you can use are getchar() and printf().


#include <stdio.h>

int main(void) {
    
    int num_digits = 0;
    int sum = 0;

    int input = getchar();
    while (input != EOF) {

        // check if input is a numeral
        if (input >= '0' && input <= '9') {
            num_digits++;
            sum = sum + input - '0'; 
        }
       
        // need new character
        input = getchar();
    }

    
    return 0;
}
