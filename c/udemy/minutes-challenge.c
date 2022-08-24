#include<stdio.h>
int main(void) {
    int minutes;
    double minutesInYear = 0.0;
    double days = 0, years = 0;
    minutesInYear = 60*24*365;
    printf("Minutes in year: %lf\n", minutesInYear);
    // minutesInDay = 60*24;
    printf("Enter the number of minutes: \n");
    scanf("%d", &minutes);
    years = minutes/minutesInYear;
    days = (minutes/60.0)/24.0;
    printf("Years : %lf\n", years);
    printf("days: %lf\n", days);
    return 0;
}