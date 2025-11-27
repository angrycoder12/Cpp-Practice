#include <iostream>

int main() {
    // variable = A reusable container for a value.
    //         A variable acts like the value it contains when you call it
    int x = 1;
    int y = 2;
    int sum = x + y;
    int product = x * y;

    std::cout << "x = 1" << '\n';
    std::cout << "y = 2" << '\n';
    std::cout << "x + y = " << sum << '\n';
    std::cout << "x * y = " << product;

    return 0;
}