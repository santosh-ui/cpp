#include<iostream>
using std::cout, std::endl;
int main(void) {
    // a and p are created on stack
    int a = 10; // a normal int declaration
    int* p = &a; // an int* declaration 
    // P is pointing to address of a

    int* q; // x is a pointer created on stack mem
    q = new int; // x is pointing to memory in heap
    // memory required for a single integer is created on stack
    // to be used for storing an integer
    *q = 20;
    cout << "q: " << q << endl;
    cout << "*q: " << *q << endl;
    delete q; // memory allocated for an integer in heap is deallocated/destroyed
    cout << "q: " << q << endl;
    cout << "q value deallocated." << endl;
    cout << "*q: " << *q << endl;

    int *x = new int[10]; // memory allocated to an array of 10 integers in heap
    // we can't change the size of this array during runtime
    *x = 50; // value initialized at the first slot/0th index of array
    cout << "x: " << x << endl; // address of pointer x
    cout << "*x: " << *x << endl; // gives value at first index by dereferencing
    cout << "*x+1: " << *x+1 << endl; // increments the value at index 0 by 1
    *(x+1) = 100; // initializes the value at second slot/1st index of array
    cout << "*(x+1): " << *(x+1) << endl;
    cout << "x[0]: " << x[0] << endl; // accessing the value at 0th index
    delete[] x; // deallocating/deleting the memory alloted to x in heap memory
    cout << "*x: " << *x << endl;
    cout << "x: " << x << endl;

    return 0;
}