#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;

int factorial(int n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    cout << factorial(n) + 1 << endl;

    return 0;
}