#include<iostream>
#include<string>
#include<vector>
using std::cout, std::cin, std::endl;
using std::string, std::vector;
int main(void) {
    // vector<int> vec{10, 20, 30, 40, 50, 60, 70, 80, 90};
    
    // int sum = 0;
    // auto beg = vec.begin(), end = vec.end();

    // add adjacent elements in the array
    // while (beg != end-1) {
    //     sum = *beg + *(beg+1);
    //     cout << sum << " ";
    //     beg++;
    // }

    // add first and last, second and second-to-last, and so on...
    // auto mid = beg + vec.size()/2;
    // while (beg != mid+1) {
    //     sum = *beg + *(end-1);
    //     cout << sum << " ";
    //     ++beg;
    //     --end;
    // }


    // 3.25 rewrite the grade clustering program using iterators instead of subscripts
    vector<int> v1(11);
    unsigned n;

    cout << "Enter your numbers between 0 and 101: " << endl;
    while (cin >> n) {
        if (n <= 100) 
            ++*(v1.begin()+(n/10));
    }

    for (unsigned i: v1) {
        cout << i << " ";
    }
    cout << endl;


//     Exercise 3.26
// In the binary search program on page 112, why did we write mid=beg+(end-beg)/2; instead of mid=(beg+end) /2;?

    // Because the iterator of vector don't define the + operator between the two iterators.
    // beg + end is illegal.
    // We can only use the subtraction between the two iterators.

    // First, there is no operator + for two iterators.
    // Second, for arithmetic types, using mid = (beg + end) / 2 may lead to overflow.


    return 0;
}