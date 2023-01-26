#include<iostream>
#include<vector>
#include<string>
using std::cout, std::cin, std::endl, std::vector;
using std::string;
int main(void) {
    // vector<int> v1{300, 337.5, 427.5, 360};
    // vector<string> v2{"Sai Santosh Raju", "Tharun Sai", "Swathik", "Sai Rohith", "Akhil Reddy", "Srikanth", "Thirumal Sai"};

    vector<vector<int>> ivec;
    // The above definition is legal. It is a vector which contains int type vectors as elements

    // vector<string> svec = ivec;
    // This is illegal
    // we cannot copy initialize string vector from an int vector. those are different types

    // vector<string> svec = (10, "null"); // This is a copy form of initialization and it's illegal
    // error: can't convert const char* to int

    vector<string> svec(10, "null");
    // legal: svec contains 10 strings whose values are all "null"

    vector<int> v1; // empty vector with 0 elements
    vector<int> v2(10); // int vector with 10 elements initialized to 0
    vector<int> v3(10, 52); // 10 elements initialized to 52
    vector<int> v4{10}; // 1 element with value 10
    vector<int> v5{10, 9}; // 2 elements with value 9
    vector<string> v6{10}; // vector of type string with 10 elements of empty string
    vector<string> v7{10, "hi!"}; // 10 elements initialized with "hi!"
    // vector<string> v8{5, "hi", "dude!"}; // ? list initialization is not possible with 
    // with an element having integer value

    return 0;
}