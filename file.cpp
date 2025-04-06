// Copyright 2025 Rupa srilekha
// This file is part of the  project.

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int unusedVariable = 42;  

    if (true) {
        std::cout << "This should be indented properly" << unusedVariable << std::endl;
    }
    
    return 0;
}
