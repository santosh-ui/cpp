#include<stdio.h>
long fibonacci(int n) {
    int f2 = 0, f1 = 1, f_old;
    for (int i = 0; i < n; i++) {
        f_old = f2;
        f2 = f2 + f1;
        f1 = f_old;
        // printf("f1 = %d, f2 = %d, fold = %d\n", f1, f2, f_old);
    }
    return f2;
}

int recursive_fib(int n) {
    if(n <= 1) {
        return n;
    } else {
        return recursive_fib(n-1) + recursive_fib(n-2);
    }
}

int main(void) {
    int n = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("%10d\t%10ld  %10d\n", i, fibonacci(i), recursive_fib(i));
    }
    return 0;
}