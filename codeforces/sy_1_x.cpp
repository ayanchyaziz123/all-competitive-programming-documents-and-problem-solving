#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln
// Ayan's Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    ll ans = 0;
    if (n % 2 == 0)
    {
        ll x = n / 2;
        cout << x << endl;
    }
    else
    {
        cout << -((n / 2) + 1) << endl;
    }
    return 0;
}