// Program that reads an integer n and then prints numbers spaced by an increment 
// Tutorial Week 3 Question 8
// Written by Catherine Cheng z5310517

// How could we build on our code from count_up.c to use an increment of the user's choosing?


#include <stdio.h>


int main(void) {

    int n;
    // prompt user for a number
    printf("Enter finish: ");
    scanf("%d", &n);
    
    int increment;
    printf("Enter increment: ");
    scanf("%d", &increment);
    
    int i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i = i + increment;
    
    }
    
    
    
    return 0;
}
