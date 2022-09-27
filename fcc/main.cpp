#include<iostream>

int addNumbers(int num1, int num2) {
    return num1 + num2;
}

int multiply_numbers(int n1, int n2) {
    return n1 * n2;
}

int main() {
//     auto result = (10 <=> 20) > 0;
//     std::cout << result << std::endl;
    // std::cout << "Number1" << std::endl;
    // std::cout << "Number2";

    /* compile time error */
    // std::cout << "\nHello World\n" << std::endl;

    /* Runtime error */
    // int value = 7/0;
    // std::cout << "The value is " << value << std::endl;

    std::cout << "Enter two numbers: \n" << std::endl;
    int v1 {0}, v2 {0};
    std::cin >> v1 >> v2;
    std::cout << "The Sum of the given numbers is " << addNumbers(v1, v2) << std::endl;
    std::cout << "The product of the given numbers is " << multiply_numbers(v1, v2) << std::endl;
    return 0;
}