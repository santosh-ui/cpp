#include<stdio.h>
int main(void) {
    // All values are in bytes
    printf("The size of short integer on my system is: %zd bytes\n", sizeof(short));
    printf("The size of integer on my system is: %zd bytes\n", sizeof(int));
    printf("The size of long integer on my system is: %zd bytes\n", sizeof(long));
    printf("The size of long long int on my system is: %zd bytes\n", sizeof(long long));
    printf("The size of character on my system is: %zd bytes\n", sizeof(char));
    printf("The size of double on my system is: %zd bytes\n", sizeof(double));
    printf("The size of long double on my system is: %zd bytes\n", sizeof(long double));
    printf("The size of float on my system is: %zd bytes\n", sizeof(float));
}