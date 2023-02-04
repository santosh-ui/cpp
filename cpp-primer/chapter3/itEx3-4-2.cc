#include<iostream>
#include<string>
#include<vector>
using std::cout, std::cin, std::endl;
using std::string, std::vector;
int main(void) {
    vector<int> vec{10, 20, 30, 40, 50, 60, 70, 80, 90};
    
    int sum = 0;
    auto beg = vec.begin(), end = vec.end();

    // add adjacent elements in the array
    // while (beg != end-1) {
    //     sum = *beg + *(beg+1);
    //     cout << sum << " ";
    //     beg++;
    // }

    // add first and last, second and second-to-last, and so on...
    auto mid = beg + vec.size()/2;
    while (beg != mid+1) {
        sum = *beg + *end;
        cout << sum << " ";
        ++beg;
        --end;
    }

    return 0;
}