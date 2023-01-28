#include<iostream>
using std::cin, std::cout, std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

// void print_vec(const vector<int>& v) {
//     cout << "size of the vecor: " << v.size() << endl;
//     for(const int& i: v) 
//         cout << i << " ";
//         cout << endl;
// }

// void print_vec(const vector<string>& v) {
//     cout << "size of the vecor: " << v.size() << endl;
//     for(const string& word: v) 
//         cout << word << " ";
//         cout << endl;
// }

int main(void) {
// //     Write a program to print the size and contents of the
// // vectors from exercise 3.13
//     // pg: 153 > pg: 146
//     vector<int> v1; // empty vector with 0 elements
//     vector<int> v2(10); // int vector with 10 elements initialized to 0
//     vector<int> v3(10, 52); // 10 elements initialized to 52
//     vector<int> v4{10}; // 1 element with value 10
//     vector<int> v5{10, 9}; // 2 elements with value 9
//     vector<string> v6{10}; // vector of type string with 10 elements of empty string
//     vector<string> v7{10, "hi!"}; // 10 elements initialized with "hi!"
//     print_vec(v1);
//     print_vec(v2);
//     print_vec(v3);
//     print_vec(v4);
//     print_vec(v5);
//     print_vec(v6);
//     print_vec(v7);

    // vector<string> text;
    // string word;
    
    // cout << "Enter each word seperated by space: " << endl;
    // while (cin >> word) {
    //     if (!word.empty()) 
    //         text.push_back(word);
    // }

    // for (string& word: text)
    //     for (char& c: word)
    //         c = toupper(c);
    
    // for (string& word: text) // for each word in the text
    //     cout << word << " "; // print the words in the same line
    // cout << endl;

    // for (decltype(text.size()) word = 0; // vector<string>::size_type
    //     word < text.size();
    //     word++
    // ) {
    //     cout << text[word] << " "; // print each word in the vector seperated by space
    //     if ((word+1) % 8 == 0) // if it is eighth word
    //         cout << endl; // print a new line
    // }

    // what is wrong with the below code?
    // vector<int> ivec; // defining an empty vector (size: 0) of type int
    // ivec[0] = 1000; // error: cannot access elements of an empty vector
    // we can just add an element to a vector using push_back() member
    // ivec.push_back(1000);
    // cout << "\"" << ivec[0] << "\"" << endl;

    // first way
    vector<int> vec1;
    for (decltype(vec1.size()) i = 0; i < 10; i++)
        vec1.push_back(42);

    // second way
    vector<int> vec2(10, 42);

    // third way
    vector<int> vec3{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    // second way is the prefered way to do so
    // because it is easy and clear 
    // the othe two are unwieldy

    cout << vec1.size() << endl;
    cout << vec2.size() << endl;
    cout << vec3.size() << endl;


    return 0;
}