/* Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum 
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. 
When either a tab or a single blank would suffice to reach a tab stop, which should be given 
preference? */

#include <stdio.h>

// #define TABSPC 8
// int main() {
//     int c, i;
//     while((c = getchar()) != EOF) {
//         if(c == ' ') {
//             i = 1;
//             while((c = getchar()) == ' ') i++;
//             if (i>=TABSPC) {
//                 int q = i/8;
//                 int no_spaces = i%TABSPC;
//                 while(q>0) {
//                     putchar('\t');
//                     q--;
//                 }
//                 for(no_spaces; no_spaces>0;no_spaces--) {
//                     putchar(' ');
//                 }
//             }
//             if(i < TABSPC) {
//                 for(i;i>0;i--) {
//                     putchar(' ');
//                 }
//             }
//         }
//         putchar(c);
//     }
//     return 0;
// }
          
/* replaces tabs with spaces from learntosolveit.com */
#define TABINC 8

int main(void)
{
    int nb,nt,pos,c;
    
    nb = 0;
    nt = 0;
    
    for(pos=1;(c=getchar())!=EOF;++pos)
        if( c == ' ')
        {
            if((pos % TABINC) != 0)
                ++nb;
            else
            {
                nb = 0;
                ++nt;
            }
        }
        else 
        {
            for( ; nt > 0 ; --nt)
                putchar('\t');
            if( c == '\t')
                nb = 0;
            else
                for( ; nb > 0; --nb)
                    putchar(' ');
            
            putchar(c);
            
            if(c == '\n')
                pos = 0;
            else if ( c == '\t')
                pos = pos + ( TABINC - (pos -1) % TABINC) - 1;
        }

    return 0;
}