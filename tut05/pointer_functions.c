// Pointer functions
// Tutorial Week 5 Question 8-9
// Written by Catherine Cheng z5310517


#include <stdio.h> 

void sum_nums(int a, int b, int *sum);
int *max(int *a, int *b);

int main(void) {
    // testing q8 function
    int num1 = 2;
    int num2 = 3;
    int total = 0;
    
    
    // how to call function?
   
    sum_nums(num1, num2, &total);
    printf("%d\n", total);
    
    // testing q9 function
    // how to call function?
    int *address = max(&num1, &num2);
    printf("%p\n", address);
    
    
    
}

// Question 8
// Write a void function which places the sum of two numbers inside a 
// variable passed in by reference.

// It should have the following prototype:

void sum_nums(int a, int b, int *sum) {
    *sum = a + b;
}

// Do we even need pointers??
/*
void sum_nums(int a, int b, int sum) {

    sum = a + b;
}
*/


// Question 9
// Write an int *function which returns the address of the greater of 
// two integers passed by reference.

// It should have the following prototype:

int *max(int *a, int *b) {
    if (*a > *b) {
    
        return a;
    } else {
        return b;
    }
    //returns pointer/address
}



