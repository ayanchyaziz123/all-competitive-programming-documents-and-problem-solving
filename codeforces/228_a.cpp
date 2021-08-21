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
    map<ll, ll> mp;
    for (ll i = 0; i < 4; i++)
    {
        ll ple;
        cin >> ple;
        mp[ple]++;
    }
    map<ll, ll>::iterator it;
    ll ans = 0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 1)
        {
            ans += (it->second - 1);
        }
    }
    cout << ans  << endl;
    

    return 0;
}