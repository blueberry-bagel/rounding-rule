#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

/*
return: array filled with elements from file

param: file pointer to file and pointer to size integer

descr: reads the size of the list, malloc new array for size,
fills the array and returns it.
*/

int* readData(FILE*, int*);

/*
return:void

param: pointer to array with elements, integer size of array

descr: this function determines if the grade should be rounded,
if it should it rounds the grades and then prints to total
number of students who benefited from the change.
*/
void determineGrade(int* , int);

/*
return:void

param: integer size or array and pointer to array filled with
    grades

descr: this function prints a list of the new grades after the 
    change
*/
void printGrade(int, int* );

/*
return:void

param: integer command line arguments

descr: this function checks if there are enough command line
    arguments and exits the program if there are not enough
*/
void checkArguments(int);

/*
return:void

param: file pointer

descr: this function checks if the file is open, and exits the
    program if the file is not open.
*/
void checkFile(FILE*);

/*
return:void

param: integer size of array, pointer to array filled with grades

descr: this function calculates and counts if the grades are an
    a,b,c,d, or f.
*/
void calculatePercent(int, int*);

/*
return:void

param: integer count number of that grade

descr: this function prints the ammount of *'s for each grade
*/
void printGraph(int);


#endif
