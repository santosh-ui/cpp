#include<stdio.h>
#define IN 1
#define OUT 0

void main() {
    int c, state;
    state = IN;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            state = OUT;
        } else if(state == OUT) {
            putchar('\n');
            putchar(c);
            state = IN;
        } else putchar(c);
    }
}