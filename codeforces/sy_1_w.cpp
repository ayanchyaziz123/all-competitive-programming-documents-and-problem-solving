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
    vector<ll> vc;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        vc.push_back(ple);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (vc[i] >= vc[k-1] && vc[i] > 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}