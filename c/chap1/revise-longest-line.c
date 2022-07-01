#include<stdio.h>
#define MAX 1000

int getNewLine(char line[], int max);
void copy(char to[], char from[]);
int main() {
    int len; /* length of the line */
    int max = 0; /* maximum length of the line seen so far */
    char line[MAX]; /* current line */
    char longest[MAX]; /* longest line */

    while ((len = getNewLine(line, MAX)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("length: %i, line: %s", max, longest);
    }
    return 0;
}

/* get a new line in a character array */
// int getNewLine(char line[], int max) {
//     int c, i;
//     for(i = 0; i < max-1 && (c = getchar()) != EOF && c != '\n'; i++) {
//         line[i] = c;
//     }

//     if(c == '\n') {
//         line[i] = c;
//         i++;
//     } else {
//         /* continue to count the line even if it is longer than the max */
//         while((c = getchar()) != EOF && c != '\n') ++i;

//         if(c == '\n') {
//             line[i] = c;
//             ++i;
//         }
//     }
//     line[i] = '\0';
//     return i;
// }

int getNewLine(char arr[], int lim){

  int c, i;

  for(i=0; i < lim -1 && (c=getchar()) != EOF && c != '\n'; ++i){
   
    arr[i] = c;

  }
  if(c == '\n'){

    arr[i] = c;
    ++i;
    
  }
 
  else{

    /* Continue to count the length even if it is longer than the max */
    while((c=getchar()!=EOF) && c != '\n'){
      
      ++i;
      
    }

    if(c == '\n'){

      arr[i] = c;
      ++i;
    
    }

  }

  arr[i] = '\0';
  return i;

}

/* copy the new longest line (from) line array (to) the longest array */
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}