#include <bits/stdc++.h>
using namespace std;
#define N ((int)2e5 + 5)
#define ll long long int
#define INF 2e18
#define MAX_LL ((ll)1e18 + 5)
#define MAX ((int)2e9 + 5)
#define dbg(x) cout << #x << " = " << x << ln
const long long LIMIT = 1e18;
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
        ll k;
        cin >> k;
        ll val = sqrt(k);
        if (val * val == k)
        {
            cout << val << " " << 1 << endl;
        }
        else
        {
            ll v = val * val;
            ll row = 0, column = 0;
            for (ll i = 1; i <= val + 1; i++)
            {
                v = v + 1;
                if (v == k)
                {
                    row = i;
                    column = val + 1;
                    break;
                }
            }
            if (!row && !column)
            {
                val++;
                v = val * val;
                for (ll i = 1; i <= val; i++)
                {
                    v -= 1;
                    if (v == k)
                    {
                        row = val;
                        column = i + 1;
                        break;
                    }
                }
                cout << row << " " << column << endl;
            }
            else
            {
                cout << row << " " << column << endl;
            }
        }
    }
    return 0;
}