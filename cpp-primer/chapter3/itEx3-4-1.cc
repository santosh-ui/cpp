#include<iostream>
#include<string>
#include<vector>
using std::cout, std::cin, std::endl;
using std::string;
using std::vector;

// void print_vec(vector<int> v) {
//     cout << "The size of the vector is: " << v.size() << endl;
//     cout << "The elements in the vector are: " << endl;
//     for (auto it = v.cbegin(); it != v.cend(); it++) {
//         cout << *it << " ";
//     }
//     cout << endl;
// }

// void print_vec(vector<string> v) {
//     cout << "The size of the vector is: " << v.size() << endl;
//     cout << "The elements in the vector are: " << endl;
//     for (auto it = v.cbegin(); it != v.cend(); it++) {
//         cout << *it << " ";
//     }
//     cout << endl;
// }

int main(void) {
    // pg: 159
    // Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105/153) using iterators.
    // vector<int> v1; // empty vector with 0 elements
    // vector<int> v2(10); // int vector with 10 elements initialized to 0
    // vector<int> v3(10, 52); // 10 elements initialized to 52
    // vector<int> v4{10}; // 1 element with value 10
    // vector<int> v5{10, 9}; // 2 elements with value 9
    // vector<string> v6{10}; // vector of type string with 10 elements of empty string
    // vector<string> v7{10, "hi!"}; // 10 elements initialized with "hi!"

    // print_vec(v1);
    // print_vec(v2);
    // print_vec(v3);
    // print_vec(v4);
    // print_vec(v5);
    // print_vec(v6);
    // print_vec(v7);



    // 3.22: Revise the loop that printed the first paragraph in text to
// instead change the elements in text that correspond to the first paragraph
// to all uppercase. After you’ve updated text, print its contents.

    // vector<string> s;
    // string word;
    // while (getline(cin, word)) {
    //     s.push_back(word);
    // }

    // // auto it1 = s[0].begin();
    // // auto it2 = s[0].end();
    // for (auto it = s[0].begin(); it != s[0].end(); ++it)
    //     *it = toupper(*it);

    // for (auto it = s.cbegin(); it != s.cend() && !it->empty(); ++it) {
    //     cout << *it << "\n    ";
    // }



    // 3.23: Write a program to create a vector with ten int elements.
// Using an iterator, assign each element a value that is twice its current value.
// Test your program by printing the vector.

    vector<int> vi;
    int n;
    for (auto i = 0; i != 10; i++) {
        cin >> n;
        vi.push_back(n);
    }
    for (auto it = vi.begin(); it != vi.end(); ++it) {
        *it *= 2;
    }

    for (auto it = vi.cbegin(); it != vi.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << vi.size();

    return 0;
}