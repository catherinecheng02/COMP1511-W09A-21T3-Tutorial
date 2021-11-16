// Recursion
// Tutorial Week 10 Question 11 - 15
// Written by Catherine Cheng z5310517

// Question 11
// What is recursion?
// - a function that keeps calling itself
// - usually has a base case/stopping case

// Question 12
// Using an iterative approach, implement a function minimum which is given a linked list struct node *head, returns the minimum of the linked list as an integer.

// If given an empty list, return INT_MAX which is defined in limits.h.

#include <limits.h>

int minimum(struct node* head) {
    if (head == NULL) {
        return INT_MAX;
    }

    int min = head->data;
    struct node *curr = head->next;
    while (curr != NULL) {
        if (min > curr->data) {
            min = curr->data;
        }
        curr = curr->next;
    }
}

// Question 13
// Using a recursive approach, implement a function minimum which is
// given a linked list struct node *head, returns the minimum of the linked list 
// as an integer.

// If given an empty list, return INT_MAX which is defined in limits.h.

// minimum should have this prototype:

// int minimum(struct node* head);


int minimum(struct node* head) {
    // stopping case/base case
    if (head == NULL) {
        return INT_MAX;
    }
    
    int curr_min = head->data;
    int rest_min = minimum(head->next);
    
    if ( curr_min < rest_min) {
        return curr_min;
    }
    else {
    
        return rest_min;
    }
    // 1 -> 2 -> 5 -> 2 -> 9 -> 0 -> 6 -> NULL
    
}

// Question 14
// Using an iterative approach, implement a function print_string_reverse which prints a string in reverse.

#include <stdio.h>
#include <string.h>

void print_string_reverse(char *string) {
    int i = strlen(string) - 1;
    while (i >= 0) {
        printf("%c", string[i]);
        i--;
    }

    return;
}

// Question 15
//Using a recursive approach, implement a function print_string_reverse which prints a string in reverse.

// print_string_reverse should have this prototype:
void print_string_reverse(char *string) {
    if (string[0] == '\0') {
        return;
    }

    print_string_reverse(&string[1]);
    printf("%c", string[0]);
    
    return;

}



