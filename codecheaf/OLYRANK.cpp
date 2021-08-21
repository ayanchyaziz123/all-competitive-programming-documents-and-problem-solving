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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll cnt1 = 0;
        ll cnt2 = 0;
        for (ll i = 0; i < 6; i++)
        {
            ll ple;
            cin >> ple;
            if (i < 3)
            {
                cnt1 += ple;
            }
            else
            {
                cnt2 += ple;
            }
        }
        ll ans = max(cnt1, cnt2);
        if (cnt1 == ans)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}