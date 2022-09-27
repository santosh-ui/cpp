#include<iostream>
int main() {

    // Braced initializers
    // variable may contain random garbage value. WARNING
    int elephant_count;

    int lion_count{}; // initializes to zero

    int dog_count{10}; // initializes to 10

    int cat_count{15}; // intitializes to 15

    // can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    // won't compile: the expression in the braces uses undeclared variables
    // int bad_initialization{doesnt_exist1 + doesnt_exist2};

    // 2.9 is of type double, with a wider range than int. ERROR OR WARNING
    // int narrowing_conversion {2.9};


}