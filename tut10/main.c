#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void handle_command(struct list *pancake, char command);

int main(void) {
    struct list *pancake = create_list();

    char command;
    while (scanf(" %c", &command) == 1) {
        handle_command(pancake, command);
    }
    return 0;
}

// Handles a command
void handle_command(struct list *pancake, char command) {
    char extra_data[MAX_STR_LENGTH];

    // TODO: Finish this function. Add more command conditions!
    //
    // Important commands:
    // - 'a' <name>: place new pancake onto pancake stack
    // - 'e':        eat top pancake
    // - 'p':        print pancake stack
    //
    if (command == 'a') {
        fgets(extra_data, MAX_STR_LENGTH, stdin);
        push_head(pancake, extra_data);
        printf("Added: %s", extra_data);
    }
    
    if (command == 'e') {
        struct node *popped_off = pop_front(pancake);
        // what if no pancakes?
        if (popped_off == NULL) {
            printf("reached the plate, no more pancakes\n");
        } else {
            printf("eaten %s\n", popped_off->data);
            free(popped_off);
        }
      
    
    }
    if (command == 'p') {
        print_list(pancake);
    
    }
    
    
    
    
    
    
    
}
