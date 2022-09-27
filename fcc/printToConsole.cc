#include<iostream>
int main() {
    /* std::cout printing stuff to console */
    std::cout << "Hello World" << std::endl;
    std::cout << "The number is " << 24 << std::endl;
    double gpa {3.7};
    std::cout << "The GPA is " << gpa << std::endl;

    /* Error */
    std::cerr << "std::cerr output - Something went wrong!" << std::endl;

    /* Log message */
    std::clog << "std::clog output - This is a log message." << std::endl;

    return 0;
}