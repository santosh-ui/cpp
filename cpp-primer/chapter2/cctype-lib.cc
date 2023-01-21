#include<iostream>
#include<cctype>
#include<string>
using std::cout, std::cin, std::endl, std::string;
int main(void) {
    // char c = '2';
    // char s = 'a';
    // char a = '\b';
    // cout << "alpha: " << isalpha(s) << endl;
    // cout << "alnum: " << isalnum(c) << endl;
    // cout << "digit: " << isdigit(s) << endl;
    // cout << "control character: " << iscntrl(s) << endl;
    // string str("I like drinking coffee.");
    // print the characters in a line
    // for(char s: str) { // for every char in str
    //     cout << s; // print the current char
    // }

    // let's count the no. of punctuation chars in a string
    // string str1("Hello, World! I am Santosh.");
    // punct_cnt has the same type that s.size() returns; see 2.5.3 cpp-primer
    // string::size_type
    // decltype(str1.size()) punct_cnt = 0;
    // count the number of punctuation chars in a string
    // for (char s: str1) { // for every char in s
    //     if(ispunct(s)) // if char is a punctuation
    //         punct_cnt++; // increment the punctuation counter        
    // }
    // cout << punct_cnt << " punctuation characters in " << str1 << endl;


    // let's change every character in a string to uppercase
    string str2("I want to go to the beach.");
    // convert str2 to uppercase
    for (auto &c: str2) // for every character in str2 (note: c is a reference)
        // cout << c << " " << &c << endl;
        c = toupper(c); // c is a reference. so, assignment changes the char in str2
    cout << str2;

    return 0;
}