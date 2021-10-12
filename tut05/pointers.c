// Intro to arrays
// Tutorial Week 5 Question 5-6
// Written by Catherine Cheng z5310517
#include <stdio.h>
int main(void) {
    // Variable recap
    // Declaration of a variable
    int a; // int a = 5;
    
    
    // Initialisation of a variable
    a = 5;
   
   
    // Every variable is stored at an address - we can print this out
    printf("%p\n", &a);
    
  
    // What is the "&"
    // "address of"
    
  
    // Question 5
    // What is a pointer?
    // type of variable - stores address in memory of another variable
    // arimed at a particular variable types
    
  
    // How do you declare a pointer?
    int *p; // int *p = &a;
  
   
    // How do you initialise a pointer? - DONT USE *
    p = &a;
    
    
    
    
    
    
    // null pointer - when we dont want pointer pointing at anything
    // int *pointer = NULL;
    
    // When do we use "*"?
    // - multiplication
    // - declare pointer int *name;
    // - dereferencing a pointer 
    
    
    
    
    
 
    
    // Dereferencing pointers - what is it?
    // - accessing data/value that pointer is pointing at 
    
    // how do i change number at a
    *p = 3;
    
    // How do we print the value that a pointer is pointing at?
    printf("%d\n", a);
    printf("%d\n", *p);
    
    // How do we print the memory address?
    printf("%p\n", &a);
    printf("%p\n", p);
 


    // Question 6
    // Why did we have to always include the & symbol in our arguments given to scanf?
    
    int b;
    scanf("%d", &b);
    // & - address of 
    // passing by reference 
    

    
    
    
    
    

}
