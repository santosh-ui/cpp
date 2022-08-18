/*
    * A Fundamental type
    * Char type in c
    * Master Rain drop
    * Aug. 16, 2022
*/

#include<stdio.h>
int main(void) {
    char c = 'a';
    printf("c in ASCII is %d\n", c);
    printf("c the character %c\n", c);
    printf("Three consecutive charaters are : %c%c%c\n", c, c+1, c+2);
    printf("Three bell rings chars are : %c%c%c\n", '\a', '\a', '\a');
    return 0;
}