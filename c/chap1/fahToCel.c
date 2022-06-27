#include<stdio.h>
void main() {
    /* print fahrenheit to celsius table */
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit-Celsius table\n");
    while(fahr <= upper) {
        // celsius = 5 * (fahr - 32) / 9;
        // printf("%d\t%d\n", fahr, celsius);
        
        celsius = (5.0/9.0) * (fahr-32.0); 
        printf("%3.0f %6.1f\n", fahr, celsius); 
        /* %6.1f describes, the number is to be printed six characters wide
        with 1 digit after the decimal point */
        fahr += step; 
    }
}