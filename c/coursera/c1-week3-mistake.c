#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
// int main(void)
// { 
// double interval;
// int i;

// for(i = 0; i <30; i++)
// {
//  interval = i/10.0;
//  printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
// }

// printf("\n+++++++\n");
// return 0;
// }

int main(void) {
    int i = 1, j = 2, n;
    // int n = (i, j);
    // int n = i, j+1;
    // int n = (i<j);
    n = i, j+1;
    printf("The value of n is %d, %d", n, (i<j));
}