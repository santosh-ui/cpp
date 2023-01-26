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
    // string str2("I want to go to the beach.");
    // convert str2 to uppercase
    // for (auto &c: str2) // for every character in str2 (note: c is a reference)
    //     // cout << c << " " << &c << endl;
    //     c = toupper(c); // c is a reference. so, assignment changes the char in str2
    // cout << str2;

    // string st3("being strong.");
    // The subscript operator ([] operator)
    // if (!st3.empty()) { // make sure there's a character to print
    //     st3[0] = toupper(st3[0]); // change the first char to uppercase
    //     cout << st3[0] << endl; // print the first char
    // }
    // cout << st3 << endl; // print the string

    // Using subscript for iteration
    // let's change the first word in the string to all uppercase
    // process characters in s until we run out of chars or we hit a whitespace
    // for (decltype(st3.size()) index = 0;
    //      index != st3.size() && !isspace(st3[index]);
    //      ++index) {
    //         st3[index] = toupper(st3[index]); // capitalize the current char
    //      }

    // cout << st3 << endl;


    // Using a subscript for random access
    // generate the hexadecimal representation of a number
    const string hexDigits("0123456789ABCDEF");
    // Here we took string const because we do not want these values to change
    cout << "Enter a sequence of numbers seperated by a SPACE and hit ENTER: " << endl;
    string result; // will hold the resulting hexify'd string
    string::size_type n; // hold numbers from the input
    // Here type is string::size_type because, as we know subscript is an
    // unsigned value. As a result we can gaurantee that the return value 
    // will be greater than or equal to 0
    while (cin >> n) {
        if (n < hexDigits.size()) // ignore invalid input
            result += hexDigits[n];
    }
    cout << "The resulting Hex Number is:\n" << result << endl;

    return 0;
}