#include<stdio.h>
void main() {
    int c, lc = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n') lc++;
    }
    printf("no. of lines are: %d\n", lc);
}