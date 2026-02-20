#include <print> // println
#include <iostream> // std::cin
#include <cmath> // sqrt
#include <string>

bool isprime(long n);


int main(int argc, char **argv)
{
    long n = std::stol(argv[1]);
    //std::println("Dame un numero:");
    //std::cin >> n;
    std::println("{} -> {}", n, isprime(n));
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

