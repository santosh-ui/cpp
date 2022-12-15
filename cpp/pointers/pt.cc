#include<iostream>
// #include<format>
// using std::format;
using std::cout;
using std::endl;
int main(void) {
    int a = 100;
    cout << a << endl;
    cout << "sizeof a is " << sizeof(a) << endl;
    char c = 'a';
    char *p = &c;
    for (int a = 0; a < 256; a++) {
        cout << "ASCII value for " << *p << " is " << (int)c << endl;
        // cout << format("ASCII value for {} is {}", c, (int)c) << endl;
        c++;
    }
    return 0;
}