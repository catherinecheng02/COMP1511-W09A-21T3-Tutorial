// Intro to arrays
// Tutorial Week 4 Question 11-16
// Written by Catherine Cheng z5310517

#include <stdio.h> 
int main(void){

    // Question 11 
    // What is an array?
    // - collection of variables of same data type
        
        
        
    // Question 12
    // Create an array called zeros of a size 7 
    // and initialise all of the elements to 0.
    int zeroes[7] = {0}; // special shorthand 

    // Question 13
    // How do we print out all these elements to ensure they are all 0?
    /*
    printf("zeroes[0] is : %d\n", zeroes[0]);
    printf("zeroes[1] is : %d\n", zeroes[1]);
    printf("zeroes[2] is : %d\n", zeroes[2]);
    printf("zeroes[3] is : %d\n", zeroes[3]);
    printf("zeroes[4] is : %d\n", zeroes[4]);
    printf("zeroes[5] is : %d\n", zeroes[5]);
    printf("zeroes[6] is : %d\n", zeroes[6]);
    */
    
    int i = 0;
    while (i < 7) {
        
        printf("%d\n", zeroes[i]);
        i++;
    }
   
    // Question 14
    // How would we do the same thing but this time have the elements initialised to 1?
    int array[7] = {1, 1, 1, 1, 1, 1, 1};
    
    // or use while loop
    int i = 0;
    while (i < 7) {
        
        array[i] = 1;
        i++;
    }
    
    // Question 15
    // If an array is declared as int numbers[20]; and your program assigns a value 
    // to each element in the array, what is the problem with the statement x = numbers[20];?
    int numbers[20];
    int x = numbers[20]; // outside scope of array 
    // for last element numbers[19]
    
    // Question 18 Running Code
       

}

// Question 16 
// Write a function array_print(int length, int arr[]) that prints all the 
// contents in an array, separated by new lines. Why do we need a length parameter?
void array_print(int length, int arr[]) {
    int i = 0;
    while (i < length) {
        
        printf("%d\n", arr[i]);
        i++;
    }
    
}

// Question 17
// see change_element.c

// Question 18
// Write a C code function to store, in each element of this array, the square 
// of the index of that element, e.g., squares[5] would contain the value 25.




