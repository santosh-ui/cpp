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



    return 0;
}