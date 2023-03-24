#include <iostream>
#include <string>

using namespace std;

string stars_helper(string s, int n)
{
    if (n == 0)
    {
        return s + "\n";
    }

    s = s + "*";
    return stars_helper(s, n - 1);
}

string stars(int n)
{
    if (n < 1)
        return "";
    return stars_helper("", n);
}