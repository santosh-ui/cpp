#include<iostream>
#include<vector>
#include<string>
using std::cin, std::cout, std::endl;
using std::string, std::vector;
int main(void) {
    // int n;
    // string s;
    vector<int> vi{1, 2, 3, 4, 5};
    for (int &i: vi) // for each element in vi
        i *= i; // square each element value in the vector
    
    for (int i: vi) // for each integer in vi
        cout << i << endl; // print the element value

    // vector<string> vs;
    // cout << "Enter the members of the int vector seperated by space: " << endl;
    // while (cin >> n) {
    //     vi.push_back(n);
    // }

    // cout << "vi elements are: " << endl;
    // for (int i: vi) {
    //     cout << i << endl;
    // }

    // cout << "Enter the elements of the string vector seperated by space: " << endl;
    // while (cin >> s) {
    //     vs.push_back(s);
    // }

    // cout << "vs elements are: " << endl;
    // for (string word: vs)
    //     cout << word << endl;
    
    return 0;
}