#include<stdio.h>
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
int main(void) {
    double grossPay = 0.0;
    double netPay = 0.0;
    double tax = 0.0;
    int Pay_rate = 12;
    int overtime_Pay_rate = 18;
    int numberOfHours;
    printf("Enter the number of hours:\n");
    scanf("%d", &numberOfHours);

    if (numberOfHours <= 40)
        grossPay = numberOfHours * Pay_rate;
    else
        grossPay = (40 * Pay_rate) + ((numberOfHours-40) * overtime_Pay_rate);

    printf("Your grossPay is: %.2lf\n", grossPay);

    /*
        Tax
        15% of the first 300
        20% of next 150
        25% of the rest
    */

    if (grossPay <= 300) {
        tax = 300 * TAXRATE_300;
    } else if (grossPay > 300 && grossPay <= 450) {
        // tax = (300 * (15/100.0)) + (150 * (20/100.0)); // wrong
        tax = 300 * TAXRATE_300;
        tax += (grossPay-300) * TAXRATE_150;
    } else {
        tax = 300 * TAXRATE_300;
        tax += 150 * TAXRATE_150;
        tax += (grossPay-450) * TAXRATE_REST;
    }

    netPay = grossPay - tax;

    printf("Tax is: %.2lf\n", tax);
    printf("Total amount of netPay is: %.2lf\n", netPay);

    return 0;
}