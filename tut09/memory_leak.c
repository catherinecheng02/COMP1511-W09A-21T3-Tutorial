#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *insert_first(int data, struct node *next);

int main(void) {
    int i = 0;
    struct node *head = NULL;
    while (i < 10) {
        head = insert_first(i, head);
        i++;
    }
    //free(head); // only freeing the first node 
    
    struct node *curr = head;
    while (curr != NULL) {
        struct node *temp = curr;
        curr = curr->next;
        free(temp);
        
    }

    return 0;
}

// Insert at the beginning of the linked list
struct node *insert_first(int data, struct node *next) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = next;

    return new;
}
