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
    ll mx = min_in_ll;
    ll mn = max_in_ll;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        if (i == 0)
        {
            mx = ple;
            mn = ple;
        }
        else
        {
            if (ple > mx)
            {
                mx = ple;
                ans++;
            }
            else if (ple < mn)
            {
                mn = ple;
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}