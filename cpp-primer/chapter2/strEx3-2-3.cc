#include<iostream>
#include<string>
using std::cout, std::cin, std::endl, std::string;
int main(void) {
    // string s = "small pixels form a big picture."; // Here's the string is const. so, it can't be changed.
    // string s("Strive hard for your happiness.");
    // string s;
    // if (cin >> s)
        // for (char &c: s) {
        //     // c = "X"; // use single quotes instead of double quotes
        //     c = 'X';
        // };


    // for(char c: s) {
    //     c = 'X'; // This will not change s
    //     // as it is not a reference pointing to the chars in s.
    // }

    // Use while and for loops for the above exercise
    // which of the three do you prefer?
    // string::size_type i;
    // while (i < s.size()) {
    //     s[i] = 'X';
    //     i++;
    // }

    // for (i = 0; i < s.size(); i++) 
    //     s[i] = 'S';
    // cout << s << endl;


    // string s;
    // cout << s[0] << endl; // the subscript is out of range. result is undefined.


    // Write a program that reads a string of characters including
    // punctuation and writes what was read but with the punctuation removed.

    // string s;
    // getline(cin, s);
    // for (const char& c: s) {
    //     if (!ispunct(c))
    //         cout << c;
    // }

    // const string s = "Keep out!";
    // for (auto &c : s) { /* ... */ }
    // The above range for is legal. The type of c is const char&
    

    return 0;
}