// Program that reads in an integer and prints a triangle

// Tutorial Week 3 Question 12
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
           if (row >= col) {
                printf("*");
           }
           else {
                printf("-");
           }
           
           col = col + 1; 
        }
        printf("\n");
        
        row = row + 1;
    }

    return 0;
}
