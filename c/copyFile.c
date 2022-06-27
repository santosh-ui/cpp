#include <stdio.h> 
 /* copy input to output; 1st version */ 
 void main() 
 { 
    int c; 
    // c = getchar(); 
    while ((c = getchar()) != EOF) { // EOF = -1 = CTRL+Z / CTRL+D
        // printf("The character entered is: %c \n", c);
        putchar(c);
    }
 }