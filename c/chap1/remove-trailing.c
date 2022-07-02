#include <stdio.h>
#define MAX 1000

int getLine(char line[], int max);
int removeTrailing(char line[]);
int main() {
    int len;
    char line[MAX];
    while((len = getLine(line, MAX)) > 0) {
        if(removeTrailing(line) > 0) {
            printf("%s", line);
        }
    }       
    return 0;
}

int getLine(char line[], int max) {
    int c, i;
    for(i = 0; i< max-1 && (c = getchar()) != EOF && c != '\n'; i++) line[i] = c;
    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

int removeTrailing() 