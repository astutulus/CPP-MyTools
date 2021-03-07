#include <iostream>

#include "Factors.h"
#include "Primes.h"

int main()
{
    // Remainder
    std::cout << "15 / 6 = " << 15 / 6 << std::endl; // 2
    std::cout << "15 % 6 = " << 15 % 6 << std::endl; // 3

    // Factors
    std::cout << "The number 965 has " << CountFactors(965) << " factors\n";

    // Primes
    std::cout << "Is prime 1 = " << (isPrime(1) ? "T" : "F") << std::endl;
    std::cout << "Is prime 2 = " << (isPrime(2) ? "T" : "F") << std::endl;
    std::cout << "Is prime 3 = " << (isPrime(3) ? "T" : "F") << std::endl;
    std::cout << "Is prime 4 = " << (isPrime(4) ? "T" : "F") << std::endl;
    std::cout << "Is prime 5 = " << (isPrime(5) ? "T" : "F") << std::endl;
    std::cout << "Is prime 6 = " << (isPrime(6) ? "T" : "F") << std::endl;
    std::cout << "Is prime 7 = " << (isPrime(7) ? "T" : "F") << std::endl;
    std::cout << "Is prime 47 = " << (isPrime(47) ? "T" : "F") << std::endl;
    std::cout << "Is prime 48 = " << (isPrime(48) ? "T" : "F") << std::endl;
    std::cout << "Is prime 600851475143  = " << (isPrime(600851475143) ? "T" : "F") << std::endl; // [It is not prime]

    std::cin.get();
}
