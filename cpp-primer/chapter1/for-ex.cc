#include<iostream>
// int main() {
//     int val = 1, sum = 0; // create val and initialize it to 1
//     // Test whether val is less than or equal to 10. If the test succeeds then execute the for body.
//     // If the test fails exit the loop and continue to execute the first statement following the for body.
//     // Increment the val
//     // Repeat the test in step 2. continuing with the remaining steps as long as the condition is true.
//     for(; val <= 10; val++) {
//         // std::cout << val << std::endl;
//         sum += val;
//     }
//     std::cout << "The sum is: " << sum << std::endl;
//     return 0;
// }

// int main() {
//     int sum = 0;
//     for(int val = -100; val <= 100; val++) {
//         sum += val;
//     }
//     std::cout << "The sum is: " << sum << std::endl;
//     return 0;
// }

// Rewrite the 

// int main() {
//     int sum = 0;
//     for(int val = 50; val <= 100; val++) 
//         sum += val;
//     std::cout << "The sum is:" << sum << std::endl;
//     return 0;
// }

// use decrement operator

// int main() {
//     for(int val = 10 ; val >= 0; val--) {
//         std::cout << val << std::endl;
//     }
//     return 0;
// }

// print the numbers between two user specified numbers

int main() {
    int val1 = 0, val2 = 0;
    std::cout << "Enter two numbers seperated by a space or a new line:" << std::endl;
    std::cin >> val1 >> val2;
    if(val1 <= val2) {
        for(val1 ; val1 <= val2; val1++) {
            std::cout << val1 << std::endl;
        }
    } else {
        for (val2 ; val2 <= val1; val2++) {
            std::cout << val2 << std::endl;
        }
    }
    return 0;
}