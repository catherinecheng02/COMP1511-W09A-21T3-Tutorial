// Free
// Tutorial Week 9 Question 3 - 9
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);

int main(void) {
    // Malloc review
    // Malloc allocates memory on the heap that can be accessed after a
    // function ends.
    
    // Let's create a node
    struct node *new = new_node(7);
    printf("data = %d\n", new->data);
    
    
    // Question 7
    // What is a memory leak? What does dcc --leak-check do?
    // - allocate memory but forgot to free it 
    
 
  
    // Question 3 and 4
    // What does free do?
    // What is the input to free and how does it help it do what it needs to do?
    // - frees memory we allocated, input is address of memory
    free(new); 
    
    // Question 5 and 6
    // What is a use after free error? Give an example.
    printf("data = %d\n", new->data);
    
    // Why are these one of the worst causes of bugs in C programs?
    
        
}
// Question 9 
// What is wrong with this code? How do we fix it so it malloc's a node?
struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;

    return new;
}





