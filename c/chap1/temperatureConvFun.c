#include<stdio.h>
double fahToCel(double fahrenheit);
double celToFah(double celsius);
int main() {
    double fahren, celsius;
    int lower, upper, step;

    step = 20, lower = 0, upper = 200;
    fahren = celsius = lower;

    printf("Conversion from Fahrenheit to Celsius\n");
    for (fahren; fahren <= upper; fahren += step) {
        printf("Fahrenheit: %.f Celsius: %.2f\n", fahren, fahToCel(fahren));
    }
    printf("Conversion from Celsius to Fahrenheit\n");
    for (celsius; celsius <= upper; celsius += step) {
        printf("Celsius: %.f Fahrenheit: %.2f\n", celsius, celToFah(celsius));
    }

    return 0;
}

/* Conversion from Fahrenheit to Celsius */
double fahToCel(double fahrenheit) {
    double celsius;
    celsius = (5.0/9.0) * (fahrenheit - 32);
    return celsius;
}

/* Conversion from Celsius to Fahrenheit */
double celToFah(double celsius) {
    double fahrenheit;
    fahrenheit = (9.0/5.0) * (celsius + 32);
    return fahrenheit;
}