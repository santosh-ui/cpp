#include<stdio.h>
void main(){
    int c, b=0, t=0, n=0;
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            b++;
        } else if(c == '\t') {
            t++;
        } else if(c == '\n') {
            n++;
        }
    }
    printf("The no. of blank spaces: %d\nThe no. of tabs: %d\nThe no. of new lines: %d\n", b, t, n);
}