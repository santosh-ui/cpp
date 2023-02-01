#include<iostream>
using std::cout, std::cin, std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;
int main(void) {
    // changing first character in the string to uppercase
    // string s("santosh");
    // if (s.begin() != s.end()) { // make sure it is not an empty string
    //     auto it = s.begin(); // it denotes the 1st character in the string s
    //     *it = toupper(*it);
    // }
    // cout << s << endl;



    // changing the first word in the string to uppercase
    string s("santosh is a good boy.");
    // process the characters until we run out of characters or we hit the space
    for (auto it = s.begin(); it != s.end() && !isspace(*it); it++) {
        *it = toupper(*it); // capitalize the current character
    }
    cout << s << endl;



    // 

    
    return 0;
}