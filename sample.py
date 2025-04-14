// Copyright 2025 Rupa
#include <iostream>

int main() {
    int x; // uninitialized variable
    for (int i = 0; i < 10; i++) {
        x = x + i; // using uninitialized x (undefined behavior)
    }
    std::cout << "Sum: " << x << std::endl
    return 0 // missing semicolon
}
