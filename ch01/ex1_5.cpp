#include <iostream>

int main() {
    int v1 = 0, v2 = 0;
    std::cout << "Enter two numbers:";
    std::cout << std::endl;
    std::cin >> v1 >> v2;
    int res = v1 * v2;
    std::cout << "[ex1_5] The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}