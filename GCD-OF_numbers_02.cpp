#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {

        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cout << "Enter two numbers:- " << endl;
    cin >> a >> b;

    cout << "GCD is :- " << gcd(a, b) << endl;

    return 0;
}