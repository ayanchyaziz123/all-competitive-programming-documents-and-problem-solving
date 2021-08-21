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
        ll row, column;
        cin >> row >> column;
        vector<vector<ll>> c;
        for (ll i = 0; i < row; i++)
        {
            vector<ll> r;
            for (ll j = 0; j < column; j++)
            {
                ll ple;
                cin >> ple;
                r.push_back(ple);
            }
            c.push_back(r);
        }
        ll cnt = 0;
        ll mn = max_in_ll;
        ll ans = 0;

        for (ll i = 0; i < row; i++)
        {
            for (ll j = 0; j < column; j++)
            {
                ll x = c[i][j];
                mn = min(mn, abs(x));
                if (x < 0)
                {
                    cnt++;
                }
                ans += abs(x);
            }
        }
        if (cnt % 2 == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans - (mn) - (mn) << endl;
        }
    }

    return 0;
}