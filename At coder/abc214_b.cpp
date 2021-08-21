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
    ll s, t;
    ll cnt = 0;
    cin >> s >> t;
    ll n = max(t, s);
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= n; j++)
        {
            for (ll k = 0; k < 3; k++)
            {
                if ((i + j + k) <= s && (i * j * k) <= t)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}