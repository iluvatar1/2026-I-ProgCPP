#include <print>

long fibonacci(long nmax);

int main(int argc, char **argv)
{
    int NMAX = std::stol(argv[1]);
    long result = fibonacci(NMAX);
    std::println("RESULT = {}", result);

    return 0;
}

long fibonacci(long nmax)
{
    long a{1}, b{2};
    long suma{2};
    std::print("{} {} ", a, b);
    while( b <= nmax ) { // WARNING: Might go a bit above nmax in c
        long c = a + b;
        if (c > nmax) {
            break;
        }
        if (c%2 == 0) {
            suma = suma + c;
        }
        std::print("{} ", c);
        // update
        a = b;
        b = c; 
    }
    std::println("");
    return suma;
}
