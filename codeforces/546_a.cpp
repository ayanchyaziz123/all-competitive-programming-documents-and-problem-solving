#include <bits/stdc++.h>
using namespace std;
#define N ((int)2e5 + 5)
#define ll long long int
#define INF 2e18
#define MAX_LL ((ll)1e18 + 5)
#define MAX ((int)2e9 + 5)
#define dbg(x) cout << #x << " = " << x << ln
const long long LIMIT = 1e18;
ll MOD = 998244353;
// Ayan's Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll k, n, w;
    cin >> k >> n >> w;
    for (ll i = 1; i <= w; i++)
    {
        ll x = i * k;
        n = n - x;
    }
    if (n >= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << abs(n) << endl;
    }

    return 0;
}