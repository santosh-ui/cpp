#include<iostream>

/*
    Program that outputs the sum from 50 to 100 inclusive.
*/
// int main() {
//     int sum = 0, v = 50; 
//     /* 
//      sum variable to store the sum and
//      v variable to store the numbers from 1 to 10 
//     */
//     while (v <= 100) {
//         sum = sum + v; // assign sum + v to sum
//         ++v; // increment v value by 1
//     }
//     std::cout << "The sum of 50 to 100 numbers is: " << sum << std::endl;
//     return 0;
// }

/*
 Program the prints the numbers from 10 down to 0
*/
// int main() {
//     int sum = 0, v = 10;
//     while(v >= 0) {
//         std::cout << v <<std::endl; // print the value of v
//         --v; // decrement the value of v
//     }

//     return 0;
// }

/*
 Promt the user to enter two numbers and 
 print each number in the range specified by these two numbers
*/

int main() {
    int v1 = 0, v2 = 0; // declare two variables to store the numbers entered by the user
    std::cout << "Enter two numbers: \n" << std::endl;
    // prompt the user to enter two numbers seperated by a space or a new line
    std::cin >> v1 >> v2;
    if(v1 <= v2) { // if v1 is less than or equal to v2
        while(v1 <= v2) {
            std::cout << v1 << std::endl;
            ++v1;
        }
    } else { // else if v1 is greater than or equal to v2
        while(v1 >= v2) {
            std::cout << v1 << std::endl;
            --v1;
        }
    }

    return 0;
}