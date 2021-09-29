// Program that reads in an integer and prints a square

// Tutorial Week 3 Question 11
// Written by Catherine Cheng z5310517


#include <stdio.h>

int main(void) {
    int row;
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    row = 0;
    while (row < n) {
        int col = 0;
        while (col < n) {
        
           printf("*");
           col = col + 1; 
        }
        printf("\n");
        
        row = row + 1;
    }

    return 0;
}
