#include<stdio.h>
int main(void) {
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company company1, company2, company3;
    company1 = XEROX;
    company2 = GOOGLE;
    company3 = EBAY;
    printf("%d\n%d\n%d\n", company1, company2, company3);
    return 0;
}