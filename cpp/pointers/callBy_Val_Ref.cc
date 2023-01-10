#include<iostream>
using std::cout, std::cin, std::endl;

// Called function with formal arguments
double Add(double a, double b) {
    // Address of a and b is diffrent from main()'s addresses
    // it's because a and b in Add() are different variables
    // created at different memory address
    // value of a and b in main() is copied into Add()
    cout << "Address of a and b in Add(): " << &a << " " << &b << endl;
    return a + b;
}

// Called function with formal arguments
double Sum(double *a, double *b) {
    // Here a and b are passed as call by reference
    // Hence, a and b addresses are same as their addresses in main()
    cout << "Address of a and b in Sum(): " << &a << " " << &b << endl;
    cout << "Value of a and b in Sum() (address of a and b in main()): " << a << " " << b << endl;
    return *a + *b;
}

// pointers as function returns is not a good idea
// Example
double *AddRet(double* a, double* b) {
    // double c = *a + *b;
    // After returning from the function the address at c is destroyed on the stack
    // which is used while running the function
    // so, returning the (address on stack memory) from the function does'nt make sense

    // instead we can return an address from heap
    // which is allocated manually and can't be destroyed until the program terminates or
    // we manually delete it
    double* c = new double;
    *c = *a + *b;
    // c is the address allocated in Heap memory
    // *c is the value stored at location c in Heap memory
    return c;
}
void PrintHelloWorld() {
    cout << "Hello World!" << endl;
}
// Calling function
int main(void) {
    double a = 300, b = 337.5;
    // cout << "Address of a and b in main(): " << &a << " " << &b << endl;
    // calling function with actual arguments
    // double c = Sum(&a, &b);
    // cout << "sum of a and b in Sum() is: " << c << endl; // calling function: call by reference
    // c = Add(a, b);
    // cout << "sum of a and b in Add() is: " << c << endl; // calling function: call by value
    double* p = AddRet(&a, &b);

    cout << "Address of p is: " << &p << endl;
    cout << "value returned by AddRet() before PHW is: " << *p << endl;
    cout << "Address returned by AddRet() after PHW is: " << p << endl;

    PrintHelloWorld();
    cout << "Address of p is: " << &p << endl;
    cout << "value returned by AddRet() after PHW is: " << *p << endl;
    cout << "Address returned by AddRet() after PHW is: " << p << endl;
    return 0;
}