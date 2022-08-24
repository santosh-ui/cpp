/*
 Logical operators and short-circuit evaluation
 Ice dragon
 Aug. 20, 2022
*/

#include<stdio.h>
int main(void) {
    int outside, weather;
    printf("\nEnter if outside 1 true 0 false: ");
    scanf("%d", &outside);
    printf("\nEnter if rain 1 true 0 false", &weather);
    scanf("%d", &weather);
    if(outside && weather)
        printf("\nPlease use an Umbrella");
    else
        printf("\nDress normally.\n\n");
    return 0;
}