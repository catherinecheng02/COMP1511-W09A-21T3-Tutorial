// Getchar and putchar
// Tutorial Week 7 Question 2-3
// Written by Catherine Cheng z5310517

#include <stdio.h>
int main(void) {

    // Question 2
    // How do we use printf and scanf to scan in characters? 
    // How does scanf signal
    // to us that it has reached the end of input?
    // - scans invalid input - return 0
    // - scans ctrl + d - return EOF (-1)

    // Question 3
    // How do we use getchar and putchar? How does getchar signal to us that it has
    // reached the end of the input?
    /* DONT DO THIS
    char input = getchar();
    putchar(input);
    */
    // end of input signified by EOF (-1)
        
    int input = getchar();
    putchar(input);
    putchar('\n');

    // Why does getchar return an int instead of a char?
    // EOF is a negative number

    // Why is getchar/putchar useful?
    // it's good for exercises where you need to scan one character at a time 
    
    
    

}
