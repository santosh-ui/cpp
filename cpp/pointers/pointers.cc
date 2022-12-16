#include<iostream>
// #include<format>
#include<string>
using std::string;
using std::cout, std::endl;
int main(void) {
    int a = 360;
    int *pi = &a;
    int c = 'c';
    int *pc = &c;
    double d = 337.5;
    double *pd = &d;
    
    cout << "a = " << a << endl;
    cout << "*pi = " << *pi << endl;
    cout << "&a = " << &a << endl;
    cout << "pi = " << pi << endl;
    cout << "&pi = " << &pi << endl;
    cout << "c = " << c << endl;
    cout << "*pc = " << *pc << endl;

    // look at this - address of c and pointer to c are the same address
    cout << "&c = " << &c << endl;
    cout << "pc = " << pc << endl;
    cout << "&pc = " << pc << endl;
    
    cout << "d = " << d << endl;
    cout << "*pd = " << *pd << endl;
    cout << "&d = " << &d << endl;
    cout << "pd = " << pd << endl;
    cout << "&pd = " << &pd << endl;

    *pd = 322.5;
    cout << "d = " << d << endl;
    cout << "*pd = " << *pd << endl;

    cout << *(pi+2) << endl;
    cout << pi+2 << endl;

    int t = 1025;
    cout << "size of int = " << sizeof(int) << endl;
    cout << "4 bytes = 4 x 8 bits\n00000000 00000000 00000000 00000000" << endl;
    cout << "t = 1025 which is\n00000000 00000000 00000100 00000001" << endl;
    int *p0 = &t;
    cout << "p0 = " << p0 << endl;
    char* p1 = (char*)p0;
    cout << "size of char is " << sizeof(char) << endl;
    cout << "p1 (char*) points to p0(int*)\np1 is 00000001 = 1" << endl;
    cout << "then p1+1 is 00000100 = 4" << endl;
    cout << "Address of p1 = " << (int*)p1 << " value = " << (int)*(p1) << endl;
    cout << "Address of p1+1 = " << (int*)(p1+1) << " value = " << (int)*(p1+1) << endl;
    return 0;
}