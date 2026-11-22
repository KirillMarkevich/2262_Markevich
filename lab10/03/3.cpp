#include <iostream>

int main() {
    int a = 6;
    int b = 3;

    int *p = &a;

    std::cout << "Address of a: " << &a << std::endl;

    std::cout << "Value through pointer: " << *p << std::endl;

    std::cout << "Multiplication: " << a * b << std::endl;

    int &reference = a;
    reference = 8;
    std::cout << "Reference value: " << reference << std::endl;

    std::cout << "Bitwise AND: " << (a & b) << std::endl;

    return 0;
}