#include <iostream>

int fibonacci(int input) {
    if(input <=1) {
        return input;
    } else {
        return fibonacci(input - 1) + fibonacci(input-2);
    }
    
}

int main() {
    int input = 0;

    std::cout << "Enter which term of the Fibonacci sequence to return\n";
    std::cin >> input;
    std::cout << fibonacci(input);
    return 0;
}

