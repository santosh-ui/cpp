// #include<stdio.h>
// #include<math.h>

// int main(void) {
//     double x;
//     double sineValue=0.0;
//     printf("Enter the value of x between (0 and 1): \n");
//     scanf("%lf", &x);
//     printf("The value of x is %.2lf\n", x);
//     if(x>=0 && x<=1) {
//         sineValue = sin(x);
//         printf("sine value of %.2lf is %.2lf", x, sineValue);
//     } else {
//         printf("The number you've entered is out of range! Please enter the value between 0 and 1.");
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main(void)
{

  double interval, i = 0;
  printf("Enter the desired interval (eg. 0.1):\n");
  scanf("%lf", &interval);
  for (; i <= 1; i += interval) {
    printf("sin(%f)=%f\n", i, sin(i));
    printf("cos(%f)=%f\n", i, cos(i));

  }
  return 0;
}