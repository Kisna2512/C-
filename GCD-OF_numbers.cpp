#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    int x, y;
    cin >> x >> y;
    cout << "GCD of number is:- " << gcd(x, y) << endl;

    return 0;
}