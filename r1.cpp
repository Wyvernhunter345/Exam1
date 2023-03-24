#include <cmath>

int sum_helper(int n, int acc)
{
    if (n == 1){
        return acc;
    }

    acc = acc + pow(n, 2);
    return sum_helper(n-1, acc);
}

int sum_of_squares(int n)
{
    return sum_helper(n, 0);
}