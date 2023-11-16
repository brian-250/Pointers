#include <iostream>

int main() {
    // Initialize int variable
    int x = 5;

    // Initialize int pointer variable
    int* num_ptr;
    num_ptr = &x;

    // Print memory address in two ways
    // 1. Print dereferenced x value '&x = memory address'
    // 2. Print num_ptr value 'num_ptr = memory address'
    // ---------------------------------------------------
    // Print int value in two ways
    // 3. Print x value 'x = 5'
    // 4. Print dereferenced num_ptr value '*num_ptr = 5'
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