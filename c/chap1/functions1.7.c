#include<stdio.h>
/* power: raise base to n-th power; n >= 0 */ 
int power(int m, int n);
// {
//     int p = 1;
//     for(int i = 0; i < n; i++) {
//         p *= m;
//     }
//     return p;
// }

void main() {
    for (int i = 0; i <= 10; i++) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
}

/* power: raise base to n-th power; n >= 0 */ 
 /* (old-style version) */ 
 int power(base, n) 
 int base, n; 
 { 
 int i, p; 
 p = 1; 
 for (i = 1; i <= n; ++i) 
 p = p * base; 
 return p; 
 } 