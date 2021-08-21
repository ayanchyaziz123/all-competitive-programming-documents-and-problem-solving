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
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            vc.push_back(ple);
            x = max(x, ple);
        }

        ll ans = vc[0] ^ x;

        for (ll i = 1; i < vc.size(); i++)
        {
            ll ple = vc[i] ^ x;
            ans |= ple;
        }
        cout << x << " " << ans << endl;
    }

    return 0;
}