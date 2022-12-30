#include<iostream>
using std::cout, std::endl;
void Print(char *c) {
    cout << "print function:" << endl;
    while(*c != '\0') {
        cout << *c;
        c++;
    }
    cout << endl;
}
int main(void) {
    char arr[10] = {'s', 'a', 'n', 't', 'o', 's', 'h'}; // string is stored in the space of array
    // size of array = no. of characters in the array + 1;
    // Rule: A string in c++ is null terminated;
    // char *arr = "santosh"; // string is stored as compile time constant
    cout << "sizeof(arr): " << sizeof(arr) << endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "/";
    for (int i = 0; i < size; i++){
        cout << arr[i];
    }
    cout << "/";
    cout << endl;
    // cout << "/" << "\0" << "/";
    cout << arr << endl;

    // Arrays and pointers are different types that are used in similar manner;
    char *pa;
    pa = arr;
    cout << pa << endl;
    cout << "sizeof(pa): " << sizeof(pa) << endl;
    // string is an immutable object so, once initialized
    // we cannot modify it.
    // arr = "Apple";
    // pa = "Apple";
    // pa[6] = 'J'; // can also be written as
    *(pa+6) = 'J';
    cout << pa << endl;
    cout << arr << endl;
    Print(pa);
    Print(pa);
    return 0;
}