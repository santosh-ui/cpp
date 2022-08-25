#include<stdio.h>
int main(void) {
    enum weekDay {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum weekDay today = Monday;

    switch(today) {
        case Sunday:
        printf("Today is Sunday.");
        break;
        case Monday:
        printf("Today is Monday.");
        break;
        case Tuesday:
        printf("Today is Tuesday.");
        break;
        default:
        printf("Whatever!");
        break;
    }
    return 0;
}