#include<stdio.h>
void main() {
    char c, b='\b', t='\t', bslash='\\';
    while((c = getchar()) != EOF) {
        if(c == b) {
            putchar('\\');
            putchar('b');
        }else if(c == t) {
            putchar('\\');
            putchar('t');
        }else if(c == bslash) {
            putchar('\\');
            putchar('\\');
        }else {
            putchar(c);
        }
    }
    // putchar('e');
    // putchar(bslash);
    // putchar('n');
    // putchar(t);
    // putchar('d');
    // putchar(b);
}