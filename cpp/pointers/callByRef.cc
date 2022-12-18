#include<iostream>
using std::cout, std::endl;

void incAsLocal(int a) {
    a = a+1; // incremented as local variable
}

void incByRef(int *x) {
    *x = *x+1;
}

int main(void) {
    int a =  50.5;
    // a++; // incrementing locally
    // incrementing in a function as local variable
    incAsLocal(a);
    cout << "a = " << a << endl;
    // increment in a function by passing as reference - call by reference
    incByRef(&a);
    cout << "a = " << a << endl;
}