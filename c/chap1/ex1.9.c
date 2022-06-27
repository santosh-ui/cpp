#include<stdio.h>
void main() {
    int c;
    // while((c = getchar()) != EOF) {
    //     if(c == ' ') {
    //         while((c = getchar()) == ' ');
    //         putchar(' ');
    //         if (c == EOF) break;
    //     }
    //     putchar(c);
    // }

    // Alternate without break
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);
            while((c = getchar()) == ' ');
        }
        putchar(c);
    }
}