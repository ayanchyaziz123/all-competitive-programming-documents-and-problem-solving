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
    string st;
    cin >> n;
    cin >> st;
    ll cnt = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (st[i] == st[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}