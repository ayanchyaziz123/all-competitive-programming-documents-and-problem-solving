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
    ll n, m;
    cin >> n >> m;
    ll arr[n + 1][m + 1];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    ll cnt = arr[0][0] ^ arr[0][1];
    vector<ll> vc;

    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (i == 0 && j == 0 && j == 1)
            {
                continue;
            }
            else
            {
                cnt ^= arr[i][j];
            }
        }
        if (cnt > 0)
        {
            vc.push_back(cnt);
        }
    }

    for (auto x : vc)
    {
        cout << x << " ";
    }

    return 0;
}