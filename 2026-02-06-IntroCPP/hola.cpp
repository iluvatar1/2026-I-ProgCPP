// This is a comment
#include <print> // uses the modern print, c++23
#include <vector>

int main(void)
{
    std::println("Hello world");

    int a = 9;
    float x = -0.987;
    double y = 1.234e56;
    bool flag = 7; // true

    std::println("{:.15e}", y);

    std::vector<double> data(5);
    data[3] = -9.85e10;

    return 0;
}