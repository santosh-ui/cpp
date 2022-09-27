#include<iostream>
int main() {
    int age {0};
    std::string name;
    // std::cout << "Please type in your name:" << std::endl;
    // std::cin >> name;
    // std::cout << "Please type in your age:" << std::endl;
    // std::cin >> age;

    /* code that takes two inputs from user seperated by spaces */
    // std::cout << "Please type in your name and age, seperated by spaces:" << std::endl;
    // std::cin >> name >> age;

    /* code that takes full name from user with spaces in it */
    /* Reading data with spaces */
    std::cout << "Please type in your full name:" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Please type in your age:" << std::endl;
    std::cin >> age;

    std::cout << "Hi, " << name << "! You are " << age << " years old." << std::endl;
    return 0;
}