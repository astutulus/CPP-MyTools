#include <iostream>
#include <vector>

#include "Factors.h"
#include "Primes.h"

constexpr auto Pr = "prime";
constexpr auto NPr = "not prime";

int main()
{
    // Remainder
    std::cout << "15 / 6 = " << 15 / 6 << std::endl; // 2
    std::cout << "15 % 6 = " << 15 % 6 << std::endl; // 3

    // Factors
    std::cout << "The number 965 has " << CountFactors(965) << " factors\n";

    // Primes
    for (int test : std::vector<int>{ 1,2,3,6,7,47,48 })
    {
        std::cout << test << " is " << (IsPrime(test) ? Pr : NPr) << std::endl;
    }

    std::cout << "600851475143 is " << (IsPrime(600851475143) ? Pr : NPr) << std::endl; // [It is not prime]

    std::cin.get();
}
