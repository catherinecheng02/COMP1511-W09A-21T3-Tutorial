// Intro to scanf
// Tutorial Week 4 Question 19-21
// Written by Catherine Cheng z5310517


// Question 19
// See OneNote



#include <stdio.h>


int main(void) {
    /*
    int num;
    
    printf("enter input: ");
    int result_of_scanf = scanf("%d", &num);
    printf("result of scanf: %d\n", result_of_scanf);
    */

    // what happens if we type other things in: char/ctrl + d
    
    
    // Question 20
    // Discuss how we could create a loop that would continually read values in 
    // from standard input until the user inputs anything other than a number 
    // (or the input ends).
    int num;
    while(scanf("%d", &num) == 1) {
        printf("read %d\n", num);
        
    }
    
    // Question 21
    // Edit the code written in the previous question so that the integers scanned 
    // in are placed into an array called inputs of size 1000. You can assume no 
    // more than 1000 numbers will be entered.

    int inputs[1000] = {0};
    int i = 0;
    while(scanf("%d", &inputs[i]) == 1) {
        i++;
        
    }
    
    
    
}
