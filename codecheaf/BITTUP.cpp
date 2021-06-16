#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll M, N;
        cin >> M >> N;
        ll x = pow(2, M);
        ll y = (x % 1000000007);
        y = y - 1;
        ll z = pow(y, N);
        ll a = (z % 1000000007);
        cout << a << endl;
    }

    return 0;
}