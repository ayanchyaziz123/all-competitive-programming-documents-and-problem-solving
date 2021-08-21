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
        ll a, b, c;
        cin >> a >> b >> c;
        ll dif = abs(a - b);
        ll mx = max(a, max(b, c));
        if (2 * dif < mx)
        {
            cout << -1 << endl;
        }
        else
        {
            if (c <= dif)
            {
                cout << c + dif << endl;
            }
            else
            {
                cout << c - dif << endl;
            }
        }
    }
    return 0;
}