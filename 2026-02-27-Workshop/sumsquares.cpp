#include <print>

void sumofsquares(long Nmax);

int main(int argc, char **argv)
{
    long N = std::stol(argv[1]);
    sumofsquares(N);
    return 0;
}

void sumofsquares(long Nmax)
{
    long total = 0;
    for (long ii = 1; ii < Nmax; ii++) {
        total += ii*ii;
    }
    std::println("{}", total);
}
