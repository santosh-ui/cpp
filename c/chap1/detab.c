#include <stdio.h>

/* Below is my solution to detab Exercise */
// #define MAXLINE 1000
// int main() {
//     int c, i;
//     char line[MAXLINE];
//     for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF; i++) {
//         if (c == '\t') {
//             for(int j = 0; j<8; j++) {
//                 line[i] = '#';
//                 i++;
//             }
//             i--;
//         } else {
//             line[i] = c;
//         }
//     }
//     line[i] = '\0';

//     printf("length: %d output: %s", i, line);
//     return 0;
// }

/* Below is the solution to the detab exercise from learntosolveit.com */
#define TABINC 8

int main(void)
{
  int nb,pos,c;

  nb = 0;
  pos = 1;

  while((c=getchar())!=EOF)
  {
    if( c == '\t')
    {
      nb = TABINC - (( pos - 1) % TABINC);

      while( nb > 0)
      {
        putchar('#');
        ++pos;
        --nb;
      }
    }
    else if( c == '\n')
    {
      putchar(c);
      pos = 1;
    }
    else
    {
      putchar(c);
      ++pos;
    }
  }

  return 0;
}