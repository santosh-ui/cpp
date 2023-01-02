#include<iostream>
using std::cout, std::cin, std::endl;
int main(void) {
    int A[3][2][2];

    int x = 0;
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++){
                A[i][j][k] = x++;
                cout << A[i][j][k] << endl;
            }
        }
    }
    

    cout << "A: " << A << endl;
    // cout << "*A: " << *A << endl;
    // cout << "&A: " << &A << endl;
    // cout << "A[0]: " << A[0] << endl;
    // cout << "A[0][0]: " << A[0][0] << endl;
    cout << "A[0][0][0]: " << A[0][0][0] << endl;
    
    // int *p0 = A; // error: cannot convert 'int (*)[2][2]' to 'int*' in initialization
    int (*p0)[2][2] = A; // A returns the 2-D array of 2 elements each
    cout << "p0: " << p0 << endl;
    // cout << "*p0: " << *p0 << endl;
    // cout << "p0[0]: " << p0[0] << endl;
    // cout << "p0[0][0]: " << p0[0][0] << endl;
    // cout << "p0[0][0][0]: " << p0[0][0][0] << endl;
    // cout << "&p0: " << &p0 << endl;
    // cout << "&p0[0]: " << &p0[0] << endl;
    // cout << "&p0[0][0]: " << &p0[0][0][0] << endl;
    // cout << "&p0[0][1]: " << &p0[0][0][1] << endl;
    // cout << "&p0[1][0]: " << &p0[0][1][0] << endl;

    // accessing the elements using index position of array
    cout << "p0[0]: " << p0[0] << endl;
    cout << "p0[0][0]: " << p0[0][0] << endl;
    cout << "p0[0][0][0]: " << p0[0][0][0] << endl;
    cout << "*(p0+2): " << *(p0+2) << endl;
    cout << "*(p0+2)+1: " << *(p0+2)+1 << endl;
    cout << "*(*(p0+2)+1): " << *(*(p0+2)+1) << endl;
    cout << "*(*(p0+2)+1)+1: " << *(*(p0+2)+1)+1 << endl;
    cout << "*(*(*(p0+2)+1)+1) : " << *(*(*(p0+2)+1)+1) << endl;

    // p[i][j][k] = *(p[i][j]+k) = *(*(p[i]+j)+k) = *(*(*(p+i)+j)+k)

    return 0;
}