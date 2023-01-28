#include<iostream>
using std::cin, std::cout, std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;
int main(void) {
    // count the number of grades by clusters of 10: 0-9, 10-19, 20-29, ..., 90-99, 100.
    // There are 101 possible grades and 11 possible clusters
    // 10 clusters of 10 numbers each and the last cluster for the perfect score 100.
    // each cluster when divided by 10 gives the numbers 0-10 respectively.
    vector<unsigned> gc(11, 0); // 11 buckets all initialized to 0
    unsigned n;
    while (cin >> n) { // read the grades
        if (n <= 100) { // handle only valid grades
            gc[n/10]++; //increment the counter for current cluster
        }
    }

    for (unsigned i: gc)
        cout << i << " ";
    cout << endl;
    return 0;
}