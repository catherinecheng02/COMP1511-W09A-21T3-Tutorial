// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "list.h"

static struct node *create_list(int values[], int size);
static struct node *create_node(int dat);



int main(void) {
    
    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}





// Question 10
struct node *copy(struct node *old_head) {
    // if empty list
    if (old_head == NULL) {
        return NULL;
    }
    struct node *new_head = create_node(old_head->data);

    // new_prev keeps track of the previous node before the new one
    struct node *new_prev = new_head;
    // old_curr keeps track of the data from the old linked list we want to copy
    struct node *old_curr = old_head->next;

    while (old_curr != NULL) {
        struct node *new = create_node(old_curr->data);
        new_prev->next = new;
        new_prev = new_prev->next;
        old_curr = old_curr->next;
    }

    return new_head;
}



// Question 11
struct node *list_append(struct node *first_list, struct node *second_list) {
    if (first_list == NULL) {
        return copy(second_list);
    }
    
    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);
    
    // loop through first list to get to last node
    struct node *curr = first_copy;
    while (curr->next != NULL) {
        
        curr = curr->next;
    }
    
    // set last node's next to second head
    curr->next = second_copy;
    
    return first_copy;
}
// Test cases to consider:
// - empty list
// - one node lists

// Question 12
int identical(struct node *first_list, struct node *second_list) {
    // no malloc because not creating any new nodes
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;
    while (first_curr != NULL && second_curr != NULL) {
        if (first_curr->data != second_curr->data) {
            return NOT_IDENTICAL;
        }
        
        first_curr = first_curr->next;
        second_curr = second_curr->next;
    }
    
    // check if both lists have reached the end
    if (first_curr != NULL || second_curr != NULL) {
        return NOT_IDENTICAL
    
    }
 
    return IDENTICAL;
}
// Test cases to consider:
// - test with an identical list - fine
// - empty list - fine
// - lists of different lengths
// - a list is a sublist of the other 
// - test lists of same lengths, but not identical - fine 









struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}



// Helper functions for testing -------------------------------------------------
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X");
}

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
static struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
static struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

