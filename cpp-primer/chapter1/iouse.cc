/* A program that uses the IO Library */
/* Read two numbers and write their sum */
#include<iostream>
int main() {
    /* Prompt the user to enter two number seperated by a space or a new line */
    std::cout << "Enter two numbers: \n" << std::endl;
    int v1 = 0, v2 = 0; // variables to hold the input the user entered
    std::cin >> v1 >> v2; // read in the input and store them in these variables

    // std::cout << "The sum of " << v1 << " and " << v2 <<
    //  " is " << v1+v2 << std::endl;
    
    /* print the output sum to the console */
    std::cout << "The sum of ";
    std::cout << v1 << " and " << v2 << " is ";
    std::cout << v1 + v2 << std::endl;

    /* print the output product of those two numbers to the console */
    std::cout << "The product of " ;
    std::cout << v1 << " and " << v2 << " is ";
    std::cout << v1 * v2 << std::endl;

    /* This code returns 0 to the OS if everything goes well.
       Otherwise it will return some non-zero value to the OS
       indicating that the program has some errors to correct
    */
    return 0;
}