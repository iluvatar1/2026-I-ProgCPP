#include <print> // println
#include <iostream> // std::cin
#include <cmath> // sqrt
#include <string>

bool isprime(long n);
void cousin(int Nmin, int Nmax);

int main(int argc, char **argv)
{
    long nmin = std::stol(argv[1]);
    long nmax = std::stol(argv[2]);
    cousin(nmin, nmax);
}

void cousin(int Nmin, int Nmax)
{
    // imprime los numeros cousin primes entre
    // Nmin y Nmax
    // recorrer los numeros entre Nmin y Nmax -> ii
    //si ii isprime and ii+4 is prime -> imprimo
    for (int ii = Nmin; ii <= Nmax; ii++) {
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

