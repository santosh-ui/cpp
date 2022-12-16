#include<iostream>
using std::cout, std::endl;
int main(void)  {
    int v = 1025;
    int *p = &v;
    cout << "*p = " << *p << "\n dereferences p which is the value stored in v = 1025" << endl;
    cout << "Address of p is " << p << endl << endl << endl;

    // pointer to pointer
    int **q = &p; // pointer q stores the address of pointer p
    cout << "*q = " << *q << "\ndereferences q which is the address of p" << endl;
    cout << "**q = " << **q << "\ndereferences *q which is the value stored in *p = v" << endl;
    cout << "Address of q is " << q << endl << endl << endl;

    // pointer to (pointer to pointer)
    int ***r = &q;
    cout << "*r = " << *r << "\ndereferences r which is the address of q" << endl;
    cout << "**r = " << **r << "\ndereferences *r = *q which is the address of p" << endl;
    cout << "***r = " << ***r << "\ndereferences **r = *p which is the value of v" << endl;
    return 0;
}