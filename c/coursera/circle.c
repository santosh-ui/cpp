#include<stdio.h>
#define PI 3.14159
int main(void) {
    double radius, area;
    printf("Enter the radius:\n");
    scanf("%lf", &radius);
    area = PI * radius;
    printf("The area is : %lf", area);
    return 0;
}