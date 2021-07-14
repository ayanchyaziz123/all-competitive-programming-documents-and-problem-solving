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

    ll n, q;
    cin >> n >> q;
    string st;
    cin >> st;

    while (q--)
    {
        map<char, ll> mp2;
        ll l, r;
        cin >> l >> r;
        for (ll i = l - 1; i < r; i++)
        {
            mp2[st[i]]++;
        }

        ll ans = 0;
        for (auto x : mp2)
        {
            ans += (int(x.first) - 96) * x.second;
        }
        cout << ans << endl;
    }

    return 0;
}