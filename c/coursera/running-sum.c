/*
 compute the minimum, maximum, sum and average
 Aug. 17, 2022
 Master Rain Drop
*/

#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int i;
    double x, min, max, sum, avg;
    
    if(scanf("%lf",&x)!=1) {
        // This block will execute only if the input value of x is of type double
        printf("No data found - bye!\n");
        exit(1);
    }

    printf("%5s%9s%9s%9s%12s%12s\n%5s%9s%9s%9s%12s%12s\n", 
            "Count", "item", "min", "max", "sum", "avg",
            "-----", "----", "---", "---", "---", "---");
    // printf(scanf("%lf", &x)!=1);
    // printf((3==3));
    printf ("%5d%9.1f%9.1f%9.1f%12.3f%12.3f\n", 
            1, x, min, max, sum, avg);
    
    for (i = 2; scanf("%lf", &x)==1; ++i) {
        if(x < min) {
            min = x;
        } else if(x > max){
            max = x;
        }
        sum +=i;
        avg = sum/i;
        printf("%5d%9.1f%9.1f%9.1f%12.3f%12.3f", i, x, min, max, sum, avg);
    }
    return 0;
}