#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
    /* for integer values and only numbers the function atoi() is used */
    // char str[] = " fame210 name and phone"; // this input does not work for atoi()
    // int x = atoi(str);

    char str[] = "59872598793288597947945314";
    char* endPtr;
    long int x = strtol(str, &endPtr, 2);
    printf("The number is %ld", x);
    return 0;
}