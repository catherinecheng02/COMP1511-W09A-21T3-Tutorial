// Intro to functions
// Tutorial Week 4 Question 4 - 9
// Written by Catherine Cheng z5310517

// Question 4
// What is a function?
// - separate piece of code with logic that we can call by name. when it's called
// - control of the program goes to the function, until it ends, then control returns to main
// - usually has inputs and outputs 

// Question 5
// Where have we seen functions already?
// - printf
// - scanf
// - main function

// Question 6
// Why would we use them? Can't we just write all our code in the main function? 
// (Hint: Imagine having to implement printf() yourself everytime you want to use it)

// - neater
// - save us on lines of code
// - faster to use if we are reusing code
// - avoid overnesting issues - style for assignment


// Question 7
// See Onenote
// - int - output type - output must be integer
// - get_larger - name of function
// - int first_num, int second_num - inputs 
/*
int get_larger(int first_num, int second_num) {
    int larger = first_num; // function logic 
    if (second_num > first_num) {
        larger = second_num;
    }

    return larger; // returning int, returning control to main
}*/

// Question 8
// In what case do we not need a return in a function? Why would we want a function
// without a return?
// - void functions need no return, sometimes we don't need an output
// - eg. function that is just printing
/*
void count_up(int finish) {
    int i = 0;
    while (i <= finish) {
        printf("%d\n", i);
        i++;
    }
}
*/

// Question 9 
// Create a function called is_even which takes in an integer and returns 1 if it is an even number, and 0 if it is not.
#include <stdio.h>

int is_even(int integer); // function prototype

int main(void) {
    
    int num;
    scanf("%d", &num);
    int return_val = is_even(num); 
    printf("return value = %d\n", return_val);
    return 0;
}

int is_even(int x) {
    if (x % 2 != 0) {
        return 0;
    
    } else {
    
        return 1;
    
    }
   
}



