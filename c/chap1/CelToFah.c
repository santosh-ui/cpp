#include<stdio.h>

#define LOWER 0 // lower limit of the table
#define UPPER 200 // upper limit of the table
#define STEP 20 // step size
void main() {
    // float fahr, celsius;
    // float lower, upper, step;

    // lower = 0;
    // upper = 200;
    // step = 20;

    // celsius = lower;

    float celsius;
    printf("Celsius - Fahrenheit table\n");
    // while(celsius <= upper) {
    //     fahr = (9.0/5.0) * (celsius+32);
    //     printf("%.f\t%.2f\n", celsius, fahr);
    //     celsius += step;
    // }

    for (celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
        printf("%.f\t\t\t%.2f\n", celsius, (9.0/5.0) * (celsius+32));
    }
}