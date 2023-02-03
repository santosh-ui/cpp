#include<iostream>
using std::cout, std::cin, std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;
int main(void) {
    // vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // // compute an iterator to the element closest to the midpoint of v1
    // auto mid = v1.begin() + v1.size()/2;
    // cout << "v1 size " << v1.size() << endl;
    // cout << "mid position " << v1.size()/2 << endl;
    // cout << *mid;

    // string str{"searching with binary search algo using iterators in cpp."};
    // char sought{'t'};
    // // char* c = &sought;
    // string::iterator mid = str.begin() + str.size()/2;
    // auto beg = str.begin(), end = str.end();


    vector<string> text{"apple", "banana", "cat", "dog", "elephant"};
    auto mid = text.begin() + text.size()/2;
    auto beg = text.begin(), end = text.end();
    string sought{"elephant"};
    cout << *mid << endl;
    while (mid != end && *mid != sought) {
        if (sought > *mid) 
            beg = mid;
        else
            end = mid + 1;
        mid = beg + (end - beg) / 2;
    }

    cout << *mid << endl;


    return 0;
}