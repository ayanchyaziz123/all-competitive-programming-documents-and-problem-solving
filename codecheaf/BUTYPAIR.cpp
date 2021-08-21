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
        vector<ll> vc;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            vc.push_back(ple);
            mp[ple]++;
        }
        ll ans = 0;
        map<ll, ll>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            ans += it->first * (vc.size() - it->first);
        }
        cout << ans << endl;
    }
    return 0;
}