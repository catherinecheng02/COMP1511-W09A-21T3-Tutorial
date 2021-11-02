// Linked list Intro
// Tutorial Week 8 Question 8 - 11
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    int zID;
    double mark;
    char name[100];
    struct student *next;
};

struct student *create_student(int zID, double mark, char *name);

int main (void) {

    // Question 8 
    // see below


    // Question 9
    // What is a linked list? How does it relate to structs in C?
    // collection of structs that are linked together via pointers  


    // Question 10 
    // How can we modify struct student to contain a pointer to another struct student?
    

    // Question 11
    // Why does this new member have to be a pointer?
    
    // Question 12
    // Create two struct student *'s using the create_student() function 
    // from the malloc exercise. These students will have the following information:
    // struct student *harry points at a struct student with:
    // - Name: Harry
    // - zID: 5000000
    // - Mark: 71.3
    
    // struct student *lucy points at a struct student with:
    // - Name: Lucy
    // - zID: 5111111
    // - Mark: 62.9
    struct student *harry = create_student(5000000, 71.3, "Harry");
    struct student *lucy = create_student(5111111, 62.9, "Lucy");
    struct student *joe = create_student(5222222, 82.3, "Joe");
    struct student *sophia = create_student(53333333, 61, "Sophia");
    struct student *charlie = create_student(5444444, 50, "Charlie");

    harry->next = lucy;
    lucy->next = joe;
    joe->next = sophia;
    sophia->next = charlie;
    charlie->next = NULL;
    
    // Question 13
    // Now that we have two struct students, we can create our first linked list! 
    // How would we now link these structs such that harry contains a pointer to 
    // lucy? What value should the next pointer in the lucy struct have?
    
    
    // Question 14
    // How would we print out the zID of lucy by only using the harry variable?
    printf("lucy's zid = %d\n", lucy->zID);
    printf("lucy's zid = %d\n", harry->next->zID);
    
    // Question 15
    // Having a linked list with 2 nodes is great, but what if we wanted to do 5? 
    // Add 3 more students to the linked list after the lucy node.

    
    // Question 16
    // If we wanted to print the name of all these students, 
    // how could that be done through only the harry variable?
    printf("%s\n", harry->name);
    printf("%s\n", harry->next->name);
    printf("%s\n", harry->next->next->name);
    printf("%s\n", harry->next->next->next->name);
    printf("%s\n", harry->next->next->next->next->name);
    
    struct student *curr = harry;
    while (curr != NULL) {
        
        printf("%s\n", curr->name);
        curr = curr->next;
    
    }
    
}




// Question 8

// Write a function that creates a new struct student and returns a pointer to it.
struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);
   
   
    return new_student;
}
