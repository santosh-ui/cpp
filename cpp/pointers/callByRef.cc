#include<iostream>
using std::cout, std::endl;

// call by value
void incAsLocal(int a) { // called function with formal arguments
    a = a+1; // incremented as local variable
}

//call by reference
void incByRef(int *x) {
    *x = *x+1;
}

int main(void) {
    int a =  50.5;
    // a++; // incrementing locally
    // incrementing in a function as local variable
    incAsLocal(a); // calling function with actual arguments
    cout << "a = " << a << endl;
    // increment in a function by passing as reference - call by reference
    incByRef(&a);
    cout << "a = " << a << endl;
}