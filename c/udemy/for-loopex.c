#include<stdio.h>
int main(void) {
    unsigned int sum = 0;
    unsigned int count = 0; // number of integers to be summed

    // Read the number of integers to be summed
    printf("Enter the number of integers you want to sum: \n");
    scanf("%u", &count);

    // sums integers from 1 to count
    for (unsigned int i = 1; i <= 10; sum += i++);

    printf("The total of the first %u integers is %u\n", count, sum);
    return 0;
}