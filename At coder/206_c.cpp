#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    ll arr[n + 1];
    ll ans = n * (n - 1) / 2;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vector<ll> vc;
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            vc.push_back(x.second);
        }
    }
    for (auto x : vc)
    {
        ans -= x * (x - 1) / 2;
    }
    cout << ans << endl;

    return 0;
}