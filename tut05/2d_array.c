// Intro to 2d arrays
// Tutorial Week 5 Question 3-4
// Written by Catherine Cheng z5310517

// Question 3
// The code square.c prints a 7�?7 grid of 1's
// How would you change it so that it instead filled a 2D array with 1's and 
// printed it out? What are the benefits of storing the values of the grid in a
// 2D array?

#include <stdio.h>

#define SIZE 7
void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar);

int main(void) {
    int row, column;
    int array[SIZE][SIZE];
    
    // set values to 1
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            array[row][column] = 1;
            
            column = column + 1;
        }
        
        row = row + 1; // or row++;
    }
    // call function
    scalar_multiply(SIZE, SIZE, array, 4);
    
    // print out 2d array
    // set values to 1
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("%d", array[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }
  
    // why use a 2d array over a grid?
    // - 2d array more flexible, modify values as much as you want 
    

    return 0;
}




// Question 4
// Write a function that takes in a 2D array of ints and multiplies every value 
// in the array by a given int.
// It will have this prototype:





// function that takes a given array of a given size, and multiplies every
// element inside by a given scalar
void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < columns) {
            
            matrix[i][j] = matrix[i][j]*scalar;
            
            
            j++;
        }
        
        i++;
    }
    
    

}


