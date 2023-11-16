#include <iostream>

int main() {
    // Initialize int variable
    int x = 5;

    // Initialize int pointer variable
    int* num_ptr;
    num_ptr = &x;

    std::cout << "---------------------------\n";
    std::cout << "Memory Address\n";
    std::cout << "&x: " << &x << '\n';
    std::cout << "num_ptr: " << num_ptr << '\n';
    std::cout << "---------------------------\n";

    std::cout << "---------------------------\n";
    std::cout << "Value\n";
    std::cout << "x: " << x << '\n';
    std::cout << "*num_ptr: " << *num_ptr << '\n';
    std::cout << "---------------------------\n";

    return 0;
}