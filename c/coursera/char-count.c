#include<stdio.h>
int main(void) {
    int digits=0, blanks=0, letters=0, others=0;
    int c;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        } else if (c >='0' && c <= '9') {
            ++digits;
        } else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            ++letters;
        } else ++others;
    }

    printf("digits=%d, blanks=%d, letters=%d\n", digits, blanks, letters);
    printf("others=%d\n", others);
    return 0;
}