#include<stdio.h>
void main() {
    int c, i, nwhite=0, nothers=0;
    int ndigits[10];

    for(i=0; i<10; i++) {
        ndigits[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9')
            ++ndigits[c-'0']; // [c-'0'] gives the index number of c [character] in ndigits array
            // simply put: the above line converts the input character to integer Eg. ('0' -> 0), ('1' -> 1),...('9' -> 9).
        else if(c == ' ' || c == '\n' || c == '\t') 
            ++nwhite;
        else ++nothers;
    }

    printf("The digits = ");
    for(i=0; i<10; i++) {
        printf("%d ", ndigits[i]);
    }
    printf("\nWhite spaces = %d\nothers = %d\n", nwhite, nothers);
    printf("\n\n:Test:\n");
    printf("The number of times 0 appeared %d\n", ndigits['0'-'0']);
    printf("0 = %d\n", '0');
    printf("1 = %d\n", '1');
    printf("2 = %d\n", '2');
    printf("3 = %d\n", '3');
    printf("4 = %d\n", '4');
    printf("5 = %d\n", '5');
    printf("6 = %d\n", '6');
    printf("7 = %d\n", '7');
    printf("8 = %d\n", '8');
    printf("9 = %d\n", '9');
    printf("number 9 %d", '9'-'0');

}