#include <bits/stdc++.h>
using namespace std;
double eps = 1e-12;
#define ll long long int
#define INF 2e18
#define max_in_ll 372036854775808
#define min_in_ll -372036854775808
#define dbg(x) cout << #x << " = " << x << ln
ll MOD = 998244353;
// Ayan's Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    if (n >= 1 && n <= 125)
    {
        cout << 4 << endl;
    }
    else if (n >= 126 && n <= 211)
    {
        cout << 6 << endl;
    }
    else
    {
        cout << 8 << endl;
    }
    return 0;
}