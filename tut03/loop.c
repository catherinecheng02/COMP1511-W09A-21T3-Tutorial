// Intro to while loops
// Tutorial Week 3 Question 5 and 6
// Written by Catherine Cheng z5310517


// Question 5
// What is a While Loop?

// What are the three most important things that should happen in (almost) 
// every while loop?

// - repeat a piece of code over and over without having to type the code multiple
// - times


// while (i < 10) {


// }

// initialise counter int i = 0
// - looping condition i < 10
// - increment i++; i = i + 1;






// Question 6 
// Discuss the errors in these while loops.
// a) 
#include <stdio.h>
int main(void) {
    /*
    // i not initialised
    int i = 0;

    while (i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */
    


    /*
    int i = 0;
    int j = 0;
    // needed == 
    while (j == 1 || i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */
    


    /*
    int i = 0;
    int n = 10;
    // condition is never false, so never ends
    while (i < n) {
        printf("%d\n", i);
        n = n + i;
        i = i + 1;
    }
    */
    


    
    int i = 0;

    while (i < 10) {
        printf("%d\n", i);
        i = i + 1;
    }
    
}
