// #include<stdio.h>
// #include<math.h>
// int main(void) {
//     double interval = 0.0;
//     int i;
    
//     printf("+++++++++++++++\n");
//     for (i = 0; i <= 10; i++) {
//         interval = i/10.0;
//         printf("sin(%.3lf) = %.3lf, cos(%.3lf) = %.3lf\n", interval, sin(interval), interval, cos(interval));
//     }

//     printf("+++++++++++++++\n");
//     return 0;
// }


// peer grading
#include<stdio.h>
#include<math.h> 

int main(void)
{
double i;

for(i=0; i<1; i=i+0.1) //usig an .1 interval from 0 to 1
{

 printf("sin( %lf ) = %lf",i, fabs(sin(i))); //print the sine function
 printf("\t cos( %lf ) = %lf \n",i, fabs(cos(i))); //print the cosine function
}

printf("\n+++++++\n");
return 0;
}