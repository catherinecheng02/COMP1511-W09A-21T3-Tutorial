// Program that reads an integer n and then prints the integers 1..n
// Tutorial Week 3 Question 7
// Written by Catherine Cheng z5310517

// Write a C program count_up.c which reads an integer n and then prints the 
// integers 1..n, one per line.


#include <stdio.h>


int main(void) {

    int n;
    // prompt user for a number
    printf("Enter finish: ");
    scanf("%d", &n);
    
    int i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    
    }
    
    
    
    return 0;
}
