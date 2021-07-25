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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        mp[ple]++;
    }

    ll mx = 0;

    for (auto x : mp)
    {
        mx = max(mx, x.second);
    }
    cout << mx << endl;

    return 0;
}