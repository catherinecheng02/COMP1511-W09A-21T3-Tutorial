// Malloc Intro
// Tutorial Week 8 Question 5 - 7
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <stdlib.h>

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
};

struct student *create_student(int zID, double mark, char *name);


int main(void) {
    // Question 5
    // What is malloc? what are its outputs and inputs?
    // allocates memory
    // input - size of memory we want to get/ amount of memory
    // output - address of the memory
    // #include <stdlib.h>

    // Question 6
    // What is sizeof? What does it give us?
    // sizeof(int), given a datatype, tells us the size

    // Question 7 
    // Create an int * variable that points to memory allocated using malloc
    int *pointer = malloc(sizeof(int));
    
    

    
}

