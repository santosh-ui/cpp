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

// int getLine(char line[], int max) {
//     int c, i;
//     for(i = 0; i< max-1 && (c = getchar()) != EOF && c != '\n'; i++) line[i] = c;
//     if(c == '\n'){
//         line[i] = c;
//         i++;
//     }
//     line[i] = '\0';
//     return i;
// }

int getLine(char s[],int lim)
{
  int i,c;

  for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
    s[i] = c;
  if( c == '\n')
  {
    s[i]=c;
    ++i;
  }
  s[i]='\0';
  
  return i;
}

int removeTrailing(char line[]) {
    int i;
    for(i = 0; line[i] != '\n'; i++);
    i--; /* raw line with out '\n' */
    
    for (i > 0; (line[i]==' ' || line[i]=='\t'); i--); /* Removing the trailing blanks and Tab spaces */
    // printf("%s", line);
    if(i>=0) {
        ++i;
        line[i] = '\n';
        ++i;
        line[i] = '\0';
    }
    return i;
}

/* To remove Trailing Blanks,tabs. Go to End and proceed backwards removing */

// int removeTrailing(char s[])
// {
//   int i;

//   for(i=0; s[i]!='\n'; ++i)
//     ;
//   --i;  /* To consider raw line without \n */

//   for(i >0; ((s[i] == ' ') || (s[i] =='\t'));--i)   
//     ; /* Removing the Trailing Blanks and Tab Spaces */

//   if( i >= 0) /* Non Empty Line */
//   {
//     ++i;
//     s[i] = '\n';
//     ++i;
//     s[i] = '\0';
//   }
//   return i;
// }