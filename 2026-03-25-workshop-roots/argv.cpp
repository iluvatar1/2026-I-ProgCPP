#include <print>

int main(int argc, char * argv[]) {
    for (int i = 0; i < argc; ++i) {
        std::println("Argument {}: {}", i, argv[i]);
    }
    int a = std::stoi(argv[1]); 
    // stoi: string to integer
    // stol: string to long
    // stod: string to double
}