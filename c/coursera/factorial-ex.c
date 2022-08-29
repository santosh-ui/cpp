#include<stdio.h>
int factorial(int);
int recursive_factorial(int);
int main(void) {
    int how_many = 0, i;
    printf("Enter how many numbers:");
    scanf("%d", &how_many);
    printf("factorials\n");
    for (i = 1; i <= how_many; i++)
        printf("%d\t %ld\n", i, factorial(i));
    
    printf("recursive factorials\n");
    for (i = 1; i<=how_many; i++)
        printf("%d\t %ld\n", i, recursive_factorial(i));
    
    return 0;
}

int factorial(int n) {
    int f = 1;
    int i = 1;
    for (i; i <= n; i++)
        f *= i;

    return f;
}

int recursive_factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        return recursive_factorial(n-1) * n;
    }
}