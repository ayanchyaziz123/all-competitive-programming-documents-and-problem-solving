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
    ll n, k;
    cin >> n >> k;
    map<string, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        string s;
        ll e;
        cin >> s >> e;
        mp[s] = mp[s] + e;
    }

    vector<ll> vc;

    for (auto x : mp)
    {
        vc.push_back(x.second);
    }

    sort(vc.begin(), vc.end(), greater<ll>());
    ll ans = 0;
    if (k <= vc.size())
    {
        k = k;
    }
    else
    {
        k = vc.size();
    }
    for (ll i = 0; i < k; i++)
    {
        ans += vc[i];
    }
    cout << ans << endl;

    return 0;
}