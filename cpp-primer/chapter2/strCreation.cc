#include<iostream>
#include<string>
using std::string, std::cin, std::cout, std::endl;
int main(void) {
    // string s; // declaring an empty string
    // cout << "Enter your text: " << endl;
    // cin >> s; // read a white-space seperated string into s
    // cout << s << endl; // write s to the output

    // a word at a time
    // string word;
    // while(cin >> word) { // read until end-of-file(EOF)/(^Z) windos os/(^D) linux is encountered
    //     cout << word << endl; // writes each word followed by a new line
    // }

    /*
     * getline Function defined in the string header that takes an istream and a
     * string. The function reads the stream up to the next newline, storing what it
     * read into the string, and returns the istream. The newline is read and
     * discarded.
     */

    // a line at a time
    // string line;
    // while(getline(cin, line)) {
    //     cout << line << endl;
    // }
    
    // using empty() member function on string object
    // while (getline(cin, line))
    //     if(!line.empty())
    //         cout << line << endl;

    // the size member returns the length of a string (i.e., no. of characters in it)
    // while (getline(cin, line))
    //     if(line.size() > 80)
    //         cout << line << endl;

    // size returns a (string::size_type) value.
    // we don't know the precise type but what we do know is
    // it is an unsigned type big enough to hold the size of any string
    // string line;
    // getline(cin, line);
    // string::size_type len = line.size();
    // cout << len << endl;

    // it is tedious to type (string::size_type)
    // under the new standard, we ask the compiler to provide 
    // the appropriate type by usin (auto) or (decltype)

    // auto len = line.size();
    // cout << len << endl;

    /*
     * Tip
     * You can avoid problems due to conversion between unsigned and int by
     * not using ints in expressions that use size().
     */

    // Exercises 3.2.2
    /*
     * Exercise 3.4: Write a program to read two strings and report whether the
     * strings are equal. If not, report which of the two is larger. Now, change
     * the program to report whether the strings have the same length, and if
     * not, report which is longer.
     */

    // string str1;
    // string str2;
    // cout << "Enter string 1: " << endl;
    // getline(cin, str1);
    // cout << "Enter string 2: " << endl;
    // getline(cin, str2);

    // if (str1 == str2) {
    //     cout << "str1 and str2 are equal." << endl;
    // } else if (str1 > str2) {
    //     cout << "str1 is greater than str2." << endl;
    // } else {
    //     cout << "str2 is greater than str1." << endl;
    // }

    // if (str1.size() > str2.size()) {
    //     cout << "str1 is longer than str2." << endl;
    //     cout << "str1 size: " << str1.size() << endl;
    //     cout << "str2 size: " << str2.size() << endl;
    // } else {
    //     cout << "str2 is longer than str1." << endl;
    //     cout << "str1 size: " << str1.size() << endl;
    //     cout << "str2 size: " << str2.size() << endl;
    // }

    /* 
     * Exercise 3.5: Write a program to read strings from the standard input,
     * concatenating what is read into one large string. Print the concatenated
     * string. Next, change the program to separate adjacent input strings by a space.
     */

    string word;
    string line;
    while(cin >> word) { // read each word until EOF is encountered
        line += word + " "; // Concatenated string seperated by a space
    }

    cout << "line: " << line << endl;

    return 0;
}