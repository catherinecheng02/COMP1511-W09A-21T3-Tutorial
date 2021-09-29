// Intro to structs
// Tutorial Week 3 Question 3 and 4
// Written by Catherine Cheng z5310517


// Question 3
// What is a struct? How is it different from integers, doubles and characters?
// - user defined data types (create our own structure)
// - have ints, doubles, chars can be in structs
// - structs can go within structs

// Question 4
// We want to hold the information about a particular time in the day. 
// We need to know the hour, minute and whether or not it is AM or PM.
#include <stdio.h> 

struct time {
    int hour;
    int minute;
    char am_or_pm;
    // int am_or_pm;
    
}; // don't forget semicolon at end



int main(void) {
    // a) How do we define the struct?
    // - defined above main function

    // b) How do we declare and initialise it?
    
    // struct time is the type 
    struct time tute;
    tute.hour = 9;
    tute.minute = 0;
    tute.am_or_pm = 'a';
    
    // c) How do we print the hour of the time?
    
    printf("%d\n", tute.hour);
    
    // d) How do we print it in the format: hh:mm [ap]m?
    // Hint: For part d, you may want to try using %02d instead of %d in a printf, 
    // and see what it does.
    printf("%c\n", tute.am_or_pm);
}
