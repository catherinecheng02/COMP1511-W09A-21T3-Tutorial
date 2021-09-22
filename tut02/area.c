// Simple program for rectangle area

// written by W09A


#include <stdio.h>

int main(void) {

    //scan in 2 int as side length
    int length;
    int width;
    printf("enter length: ");
    scanf("%d", &length);
    
    printf("enter width: ");
    scanf("%d", &width);
    
    int area;
    area = length*width;
    // print area
    printf("area = %d\n", area);

    return 0;
}
