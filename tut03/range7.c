// Program that reads two integers and prints integers between them that are divisible by 7  
// Tutorial Week 3 Question 9
// Written by Catherine Cheng z5310517

// Write a C program range7.c which reads 2 integers n and m, and then prints the integers between n and m (including n and m) which are divisible by 7.

#include <stdio.h>


int main(void) {
    int start;
    printf("Enter start: ");
    scanf("%d", &start);
    
    
    int finish;
    // prompt user for a number
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    int i = start;
    
    while(i <= finish) {
        // if divisible print out
        if (i % 7 == 0 ) {
            printf("%d\n", i);
            
        }
        i++;
        
    }
    
    
    
    
    
    
}
