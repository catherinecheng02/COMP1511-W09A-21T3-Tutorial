// Week 8 Tutorial: Letters
// letters.c
//
// You must change this file.
//
// Implements the functions required.
//

#include "letters.h"



int check_letter(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return 1;
    }
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    return 0;
}
