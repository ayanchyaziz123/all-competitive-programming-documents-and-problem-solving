#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
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
        ll n, x, t;
        cin >> n >> x >> t;
        ll m = t / x;
        ll ans = 0;
        if (x > t)
        {
            cout << 0 << endl;
        }
        else if (x == t)
        {
            cout << n - 1 << endl;
        }
        else
        {
            if (m > n)
            {
                ans = (n * (n - 1)) / 2;
                cout << ans << endl;
            }
            else
            {
                ll z = n - m;
                ans += z * m;
                ans += (m * (m - 1)) / 2;
                cout << ans << endl;
            }
        }
    }

    return 0;
}