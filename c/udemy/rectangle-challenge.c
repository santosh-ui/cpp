#include<stdio.h>
int main(void) {
    double width = 0.0;
    double height = 0.0;
    double perimeter = 0.0;
    double area = 0.0;

    printf("Enter the width of the rectangle: \n");
    scanf("%lf", &width);
    printf("Enter the height of the rectangle: \n");
    scanf("%lf", &height);
    perimeter = 2 * (width + height);
    area = width * height;
    printf("The perimeter of the rectangle is: %.2lf\n", perimeter);
    printf("The area of the rectangle is: %.2lf\n", area);
    return 0;
}