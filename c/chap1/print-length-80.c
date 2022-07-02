#include <stdio.h>
#define MAX 1000
#define THRES 80

int getNewLine(char line[], int max);
void copy(char to[], char from[]);

int main() {
    int length; /* length of the current line */
    char line[MAX];
    // char longest[MAX];
    while ((length = getNewLine(line, MAX)) > 0){
        if(length > THRES) {
            // copy(longest, line);
            printf("length = %d, line = %s", length, line);
        }
    }
    return 0;
}

int getNewLine(char line[], int max) {
    int c, i;
    for(i = 0; i<max-1 && (c = getchar())!=EOF && c!='\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    } else {
        while(c != EOF && c != '\n') ++i;
        if (c == '\n') {
            line[i] = c;
            ++i;
        }
    }
    line[i] = '\0';
    return i;
}

void copy(char longest[], char line[]) {
    int i = 0;
    while((longest[i] = line[i]) != '\0') {
        ++i;
    }
}