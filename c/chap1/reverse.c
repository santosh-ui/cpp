#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int max);
void reverse(char to[], char from[], int len);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char reverse_line[MAXLINE];
    while ((len = getLine(line, MAXLINE)) > 0) {
        reverse(reverse_line, line, len);
    }
    printf("%s", reverse_line);
    return 0;
}

int getLine(char line[], int max) {
    int c, i;
    for(i = 0; i < max-1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if(c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void reverse(char reverse_line[], char line[], int len) {
    int i = 0, j = len-1;
    for(i, j; i<len && j>=0; i++, j--) {
        reverse_line[i] = line[j];
    }
}