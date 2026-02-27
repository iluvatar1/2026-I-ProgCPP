#include <print> // println
#include <iostream> // std::cin
#include <cmath> // sqrt
#include <string>

bool isprime(long n);
void cousin(long Nmin, long Nmax);
void sexytriplets(long Nmin, long Nmax);


int main(int argc, char **argv)
{
    long nmin = std::stol(argv[1]);
    long nmax = std::stol(argv[2]);
    sexytriplets(nmin, nmax);
}

void sexytriplets(long Nmin, long Nmax)
{
    // imprime los numeros sexy primes entre
    // Nmin y Nmax
    for (long ii = Nmin; ii <= Nmax; ii++) {
        if (isprime(ii) and isprime(ii+6) and isprime(ii+12)) {
            std::print("({}, {}, {}) ", ii, ii+6, ii+12);
        }
    }
    std::println("");
}


void cousin(long Nmin, long Nmax)
{
    // imprime los numeros cousin primes entre
    // Nmin y Nmax
    // recorrer los numeros entre Nmin y Nmax -> ii
    //si ii isprime and ii+4 is prime -> imprimo
    for (long ii = Nmin; ii <= Nmax; ii++) {
        if (isprime(ii) and isprime(ii+4)) {
            std::print("({}, {}) ", ii, ii+4);
        }
    }
    std::println("");
}



bool isprime(long n)
{ 
    /*
    un for entre ii = 1 hasta ii <= n
    mirar si ii es divisor o no de n
    */

    if (n <= 1) {
        return false;
    }

    for(long ii = 2; ii <= std::sqrt(n)+1; ii++){
        if (n%ii == 0) {
            return false;
        }
    }
    return true;
}

