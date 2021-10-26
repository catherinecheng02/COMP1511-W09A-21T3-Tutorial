
// Command line arguments
// Week 7 Tutorial Question 11 and 12
// Written by Catherine Cheng z5310517
 


#include <stdio.h> 

int main(int argc, char *argv[]) {
    // Question 10
    // Another way your program can receive input is through command line arguments. 
    // How are command line arguments given to a program?
    // - given as arguments inside main function
    
    // What are argc and argv?
    
    // int argc - integer of argument count (size of argv)
    // char *argv[] - array of strings
    
    
    // Question 11
    // If the following command were run, what would argc and argv contain?

    // ./program these are command line arguments
    
    // argc = 6
    // argv = {"./program", "these", "are", "command", "line", "arguments"}
    
    
    
    
    
    // Let's try printing this out
    // print argc:
    printf("%d\n", argc);
    
    
    // print argv
    int i = 0;
    while (i < argc) {
        printf("%s\n", argv[i]);
        i++;
    
    
    }
    
  
    
    // what if we don't want to print the program name?
    // int i = 1;
    

}
