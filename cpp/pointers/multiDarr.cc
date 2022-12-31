#include<iostream>
using std::cout, std::endl;
int main(void) {
    int A[2][3];
    A[0][0] = 2;
    A[0][1] = 4;
    A[0][2] = 6;

    A[1][0] = 1;
    A[1][1] = 3;
    A[1][2] = 5;

    // different types of accessing an element of the array using pointers
    cout << "*A[0]: " << *A[0] << endl;
    cout << "A[0][0]: " << A[0][0] << endl;
    cout << "**A: " << **A << endl;

    cout << endl;
    // int *p = A; // this initialization is wrong since A returns 1-D array of 3 elements 
    cout << "A: " << A << endl;
    cout << "*A: " << *A << endl; // gives address of 1-D array of 3 elements
    cout << "A[0]: " << A[0] << endl;

    int (*p0)[3] = A;
    cout << "*p0: " << *p0 << endl;

    cout << "&A: " << &A << endl;
    cout << "&A[0]: " << &A[0] << endl;
    cout << "&A[0][0]: " << &A[0][0] << endl;
    cout << endl;

    // different ways to access the address of array at index 1
    cout << "A+1: " << A+1 << endl;
    cout << "*(A+1): " << *(A+1) << endl;
    cout << "A[1]: " << A[1] << endl;

    int (*p1)[3] = A+1;
    cout << "*p1: " << *p1 << endl;

    // cout << "&A+1: " << &A+1 << endl;
    cout << "&A[1]: " << &A[1] << endl;
    cout << "&A[1][0]: " << &A[1][0] << endl;
    cout << endl;

    // A -> int(*)[3]
    // A[0] -> int*

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << A[i][j] << endl;
    }
    return 0;
}