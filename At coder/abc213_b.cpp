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
    ll n;
    cin >> n;
    vector<ll> vc;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        vc.push_back(ple);
    }
    vector<ll>vc2 = vc;

    sort(vc.begin(), vc.end());

    ll x = vc.size();
    ll gt = vc[x - 2];
    ll ans = 0;

    for (ll i = 0; i < x; i++)
    {
        if (vc2[i] == gt)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}