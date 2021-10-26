// Intro to strings
// Week 7 Tutorial Question 5 and 6
// Written by Catherine Cheng z5310517

#include <stdio.h> 
int secret_function(char *word);


int main(void) {
    // Question 5
    // What is a string?
    // array of chars ending in '\0'
        
    // How do we initialise strings?
    char word1[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // have to remember null character
    
   
    // Another way?
    char word2[] = "hello"; // dont need \0, because "" implicitly add them

    // How do we print out string?
    printf("%s\n", word2);
    
    
}

// Question 6
// What does the following function do?
// - counting number of lowercase letters in a given string

// Can you explain the stopping case in the while loop? Why does it work and 
// what is the significance of the '\0'?
// - so that we know when the end of the string is, and to stop there

// What does the char *word input mean? What's the relationship between an array 
// and a pointer?
// - pointer to a char, specifcally to the first char in the array of chars


int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}
