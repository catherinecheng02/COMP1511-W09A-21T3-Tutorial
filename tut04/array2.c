

#include <stdio.h> 
#define SIZE 10
void array_print(int length, int arr[]);
void write_squares(int squares[SIZE]);
int main(void){
    int array[SIZE] = {0};
    write_squares(array);
    array_print(SIZE, array);
    
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
void write_squares(int squares[SIZE]) {
    
    int i = 0;
    while (i < SIZE) {
        squares[i] = i*i;
        i++;
    }
}

