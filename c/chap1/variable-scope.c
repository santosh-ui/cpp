#include<stdio.h>
#define MAXLINE 1000 /* Maximum line length */

/* External variables are declared outside the main function */
int max; /* Maximum line length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */

/* Variables declared inside the functions are called local variables (Also known as automatic variables)
    They exist only when the function is called and disappeares when the function is exited */

/* The variable must also be declared in each function that wants to access it; this 
states the type of the variable. The declaration may be an explicit extern statement or may be 
implicit from context */

/* function declaration */
int getLine(void);
void copy(void);

int main() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getLine()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }
    if (max > 0) { /* so, there was a line */
        printf("%s", longest);
    }
    return 0;
}

/* getLine: specialized version */
int getLine(void) {
    int c, i;
    extern char line[];
    for (i = 0; i<MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

/* copy - specialized version */
void copy(void) {
    int i;
    extern char line[], longest[];
    i = 0;
    while((longest[i] = line[i]) != '\0') {
        i++;
    }
}