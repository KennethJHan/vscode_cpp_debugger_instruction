#include <iostream>

int main(int argc, char **argv) {
    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
    }
    int n = 3;
    for (int i = 0; i < n; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}