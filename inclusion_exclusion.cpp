#include <bits/stdc++.h>
using namespace std;

int divisible(int n, int a, int b)
{

    int c1 = n / a;
    int c2 = n / b;

    int c3 = n / (a * b);
    return c1 + c2 - c3;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    cout << divisible(n, a, b);

    return 0;
}