// Fgets
// Week 7 Tutorial Question 7 - 9
// Written by Catherine Cheng z5310517

#include <stdio.h>

int main(void) {
    // Question 7
    // How do we use fgets? What are the inputs given to fgets? 
    // 3 inputs:
    // - string - where to store the string we scan in
    // - size - length of above destination string
    // - stream - stdin
    /*
    char array[7];
    fgets(array, 7, stdin);
    printf("%s", array);
    */
    
    // How does fgets signal to us that it has reached the end of the input?
    // NULL
    
    // How do we use fgets in while loop?
    
    
    // Question 8
    // When fgets scans in a line of text, will it include a '\n' at the end of the line? 
    // Is this always the case?
    // - normally yes
    // // h e l l o \0 \n - if size is 6, \n is ignored

    
   
    


    // QUESTION 9
    // Write a program echo_twice.c which reads lines from its input and prints them twice.

    // The only functions you can use are fgets and printf. You can assume lines contain 
    // at most 4096 characters.
    char array2[4096];
    while (fgets(array2, 4096, stdin) != NULL) {
        printf("%s", array2);
        printf("%s", array2);
        // no need for iteration
    }
    
    
    
    
}
