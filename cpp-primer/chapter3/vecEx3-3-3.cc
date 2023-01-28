#include<iostream>
using std::cin, std::cout, std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

void print_vec(const vector<int>& v) {
    cout << "size of the vecor: " << v.size() << endl;
    for(const int& i: v) 
        cout << i << " ";
        cout << endl;
}

void print_vec(const vector<string>& v) {
    cout << "size of the vecor: " << v.size() << endl;
    for(const string& word: v) 
        cout << word << " ";
        cout << endl;
}

int main(void) {
//     Write a program to print the size and contents of the
// vectors from exercise 3.13
    // pg: 153 > pg: 146
    vector<int> v1; // empty vector with 0 elements
    vector<int> v2(10); // int vector with 10 elements initialized to 0
    vector<int> v3(10, 52); // 10 elements initialized to 52
    vector<int> v4{10}; // 1 element with value 10
    vector<int> v5{10, 9}; // 2 elements with value 9
    vector<string> v6{10}; // vector of type string with 10 elements of empty string
    vector<string> v7{10, "hi!"}; // 10 elements initialized with "hi!"
    print_vec(v1);
    print_vec(v2);
    print_vec(v3);
    print_vec(v4);
    print_vec(v5);
    print_vec(v6);
    print_vec(v7);

    return 0;
}