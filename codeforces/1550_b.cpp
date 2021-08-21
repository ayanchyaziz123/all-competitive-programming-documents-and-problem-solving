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
        ll n, a, b;
        cin >> n >> a >> b;
        string st;
        cin >> st;
        if (b >= 0)
        {
            cout << (a * n + b * n) << endl;
        }
        else
        {
            ll cnt = 0;
            ll z = 0;
            for (ll i = 0; i < n; i++)
            {
                if (st[i] == '0')
                {
                    while (st[i] == '0' && i < n)
                    {
                        i++;
                        z++;
                    }
                    cnt++;
                }
            }
            if (z != n)
            {
                cnt++;
            }

            ll cnt2 = 0;
            z = 0;
            for (ll i = 0; i < n; i++)
            {
                if (st[i] == '1')
                {
                    while (st[i] == '1' && i < n)
                    {
                        i++;
                        z++;
                    }
                    cnt2++;
                }
            }
            if (z != n)
            {
                cnt2++;
            }
            ll ans = min(cnt, cnt2);
            cout << (a * n) + (b * ans) << endl;
        }
    }
    return 0;
}