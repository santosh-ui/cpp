#include<stdio.h>
void main() {
    double nc = 0;
    // while(getchar() != EOF) {
    //     ++nc;
    // }

    for (nc; getchar()!=EOF; ++nc);
    printf("\n%.1f\n", nc);
}