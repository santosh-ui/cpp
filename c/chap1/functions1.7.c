#include<stdio.h>
/* power: raise base to n-th power; n >= 0 */ 
int power(int m, int n) {
    int p = 1;
    for(int i = 0; i < n; i++) {
        p *= m;
    }
    return p;
}

void main() {
    for (int i = 0; i <= 10; i++) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
}