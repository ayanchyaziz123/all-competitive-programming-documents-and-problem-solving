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
    ll n, x;
    cin >> n >> x;
    string st;
    cin >> st;
    ll j = 0;
    while (j < x)
    {
        for (ll i = 0; i < n - 1; ++i)
        {
            if (st[i] == 'B' && st[i + 1] == 'G')
            {
                st[i] = 'G';
                st[i + 1] = 'B';
                i++;
            }
        }
        j++;
    }
    cout << st << endl;
    return 0;
}