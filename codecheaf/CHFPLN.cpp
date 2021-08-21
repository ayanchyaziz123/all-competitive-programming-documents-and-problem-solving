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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            mp[ple]++;
        }

        ll ans = 0;

        for (auto x : mp)
        {
            if (x.first - 1 < x.second)
            {
                ans += x.first - 1;
            }
            else
            {
                ans += x.second;
            }
        }
        cout << ans << endl;
    }

    return 0;
}