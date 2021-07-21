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
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        mp[ple]++;
    }
    vector<ll> vc;
    ll sum = mp.size();
    if (sum <= m)
    {
        cout << mp.size() << endl;
    }
    else
    {
        cout << m << endl;
    }

    return 0;
}