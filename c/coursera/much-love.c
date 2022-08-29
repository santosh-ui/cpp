#include<stdio.h>
int main(void) {
    int repeat = 0;
    printf("How much is your love? 1-10\n");
    scanf("%d", &repeat);
    printf("I Love Jisoo very ");
    while(repeat > 0) {
        printf("very ");
        repeat--;
    }
    printf("much!");
    return 0;
}