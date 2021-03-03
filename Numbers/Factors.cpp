#include <set>

int CountFactors(int n)
{
    int lower = 1;
    int upper = n;

    std::set<int> factors;

    while (lower < upper)
    {
        if (n % lower == 0)
        {
            factors.insert(lower);
            factors.insert(upper);
        }
        lower++;
        upper = n / lower;
    }
    return factors.size();
}
