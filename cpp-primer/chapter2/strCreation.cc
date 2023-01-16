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
    string line;
    getline(cin, line);
    // string::size_type len = line.size();
    // cout << len << endl;

    // it is tedious to type (string::size_type)
    // under the new standard, we ask the compiler to provide 
    // the appropriate type by usin (auto) or (decltype)

    auto len = line.size();
    cout << len << endl;

    return 0;
}