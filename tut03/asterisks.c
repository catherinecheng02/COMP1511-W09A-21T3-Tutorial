// Program that reads in an integer and prints out that many asterisks, 
// each on a new line.

// Tutorial Week 3 Question 10
// Written by Catherine Cheng z5310517


#include <stdio.h>

int main(void) {
    int row;
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    row = 0;
    while (row < n) {
        printf("*\n");
        row = row + 1;
    }

    return 0;
}
