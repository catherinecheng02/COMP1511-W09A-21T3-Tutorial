// Struct pointers
// Tutorial 7 Question 12 - 15
// Written by Catherine Cheng z5310517

#include <stdio.h>

struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
};


int main(void) {
    // Question 12
    // How would you create a variable, stu, which is a struct student?
    struct student stu;
    
    // Question 13
    // How would you create a variable, stu_pointer, that points to this new struct?
    /*
    int a;
    int *a_pointer = &a;
    */
    
    struct student *stu_pointer = &stu;
    
    
    // Question 14
    // How would you give stu the following values by only using this new pointer?
    // zID: 5123456
    // wam: 74.7
    // name: Frankie
    /*
    stu.zID = 5123456;
    */
    
    (*stu_pointer).zID = 5123456;
    (*stu_pointer).wam = 74.7;
    strcpy((*stu_pointer).name, "Frankie");
    
 
    
    // Question 15
    //What is the use of the -> operator? Change the previous code to utilise it.
    stu_pointer->zID = 5123456;
    // only use -> when you have a pointer to a struct.
    // we use . when you just have a normal struct - week 3 
    
    
    return 0;
}
