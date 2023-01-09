#include<iostream>
using std::cin, std::cout, std::endl;
int main(void) {
    int *p = new int;
    int (*A)[2] = new int[2][2];
    *p = 10;
    cout << "*p: " << *p << endl;
    cout << "size of p: " << sizeof(p) << endl;
    cout << "size of A: " << sizeof(A) << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            A[i][j] = i+10;
            cout << A[i][j] << endl;
        }

    delete p;
    delete A;
    cout << "*p: " << *p << endl;

    return 0;
}
