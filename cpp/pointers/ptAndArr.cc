#include<iostream>
using std::cout, std::endl;
double sumOfArray(double *A, int size) { // int *A or int A[]  ...it's the same
    double sum = 0.0;
    cout << "sizeof(A) = " << sizeof(A) << endl;
    for(int i = 0; i < size; i++) {
        cout << i << endl;
        cout << *(A+i) << endl;
        sum += *(A+i); // A[i] is *(A+i)
    }
    return sum;
}

int main(void) {
    // initialize an array
    double A[5] = {322.5, 337.5, 345, 360, 56};
    int size = sizeof(A)/sizeof(*A);
    cout << "size = " << size << endl;
    cout << "*A+1 = " << *A+1 << endl; // adds 1 to value at (index 0) or first value
    cout << "*(A+1) = " << *(A+1) << endl; // moves the pointer to the next index
    A[2] = 11*7.5;
    for (int i = 0; i < 5; i++) {
        cout << "A[" << i 
        << "] = " << A[i] << endl;
    }
    double *p = A;
    p--; // valid
    // A++; // invalid
    double sum = sumOfArray(A, size); // A can be used for &A[0]
    cout << "sum = " << sum << endl;
    return 0;
} 