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
        ll n;
        cin >> n;
        vector<vector<ll>> vc;
        ll cnt = 1;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << -1 << endl;
        else
        {
            for (ll i = 0; i < n; i++)
            {
                vector<ll> vc2;
                for (ll j = 0; j < n; j++)
                {
                    vc2.push_back(cnt);
                    cnt++;
                }
                vc.push_back(vc2);
            }

            for (ll i = 0; i < n - 1; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    if (j % 2 == 1)
                    {
                        swap(vc[i][j], vc[i + 1][j]);
                    }
                }
            }

            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    cout << vc[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}