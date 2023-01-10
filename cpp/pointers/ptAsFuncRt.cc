#include<iostream>
using std::cout, std::cin, std::endl;
int main(void) {
    int s;
    cout << "Enter the size of the array: " << endl;
    cin >> s;
    cout << "size of array is: " << s << endl;
    int* A = new int[s]; // dynamically allocated array
    for (int i = 0; i < s; i++) A[i] = i+1;
    delete[] A;
    // After deleting A, adjust pointer to NULL
    // A = NULL;
    cout << "elements in A are: " << endl;
    for (int i = 0; i < s; i++) cout << A[i] << endl;
    cout << "sizeof(A) is: " << sizeof(A) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    
    // Using malloc and realloc
    int* B = (int*)malloc(s*sizeof(int)); // creating an array
    for (int i = 0; i < s; i++) B[i] = i+11;
    cout << "elements in B are: " << endl;
    for (int i = 0; i < s; i++) cout << B[i] << endl;
    cout << "size of B is: " << sizeof(B) << endl;

    // reallocating and resizing the array B using C
    // elements in B are copied to C. if C is not initialized. 
    int* C = (int*)realloc(B, sizeof(int)*2*s);
    // int* C = (int*)realloc(B, 2*s);
    // for (int i = 0; i < 2*s; i++) C[i] = i+21;
    // elements in C are accessed using for loop
    cout << "elements in C are: " << endl;
    for (int i = 0; i < 2*s; i++) cout << C[i] << endl;
    cout << "sizeof(C) is: " << sizeof(C) << endl;
    cout << "B address " << B << " C address " << C << endl;
    // A = (int*)realloc(A, 0); // equivalent to free(A)
    // A is deleted
    // for (int i = 0; i < s; i++) cout << A[i] << endl;
    cout << "A is created again: " << endl;
    // Again create A
    A = (int*)realloc(NULL, sizeof(int)*2*s); // equivalent to malloc
    for (int i = 0; i < 2*s; i++) A[i] = i+100;
    for (int i = 0; i < 2*s; i++) cout << A[i] << endl;
    // the below free function and the delete operator does the same job
    free(A);
    delete[] B;
    delete[] C;
    for (int i = 0; i < s; i++) cout << B[i] << endl;
    for (int i = 0; i < s; i++) cout << C[i] << endl;


    return 0;
}