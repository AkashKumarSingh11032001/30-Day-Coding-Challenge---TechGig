// Question 1

// Hello TechGig (100 Marks)
// For this code challenge, you need to read a line from stdin and store it to a variable, print 'Hello Techgig' and then on another line, print the variable's value.
// A single line to be taken as input and save it into a variable of your choice.

// Input Format
// A single line to be taken as input and save it into a variable of your choice. 

// Constraints
// 1 <  |s| < 10000

// Output Format
// Print 'Hello Techgig' and then content of the variable on another line. 

// Sample TestCase 1
// Input
// I am coming back to the race.
// Output
// Hello Techgig
// I am coming back to the race.
// Explanation
// For the first Line, we are printing the string literal 'Hello Techgig'. On another line, we are printing the content of the variable. To pass all the test cases, you need to print all the content of the variable to stdout.


// #code --->
/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(int argc, char *a[])
{
    //Write code here
    char name[100];
    scanf ("%[^\n]%*c", name);
    printf("Hello Techgig\n");
    printf(name);
    return 0;
}

