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
        int D, d, p, q;
        cin >> D >> d >> p >> q;
        ll ans = 0;
        ll n = D / d;
        ans = (p * n + (q * (n - 1) * n) / 2) * d;
        if (D % d != 0)
        {
            ans += (D % d) * (p + n * q);
        }
        cout << ans << endl;
    }

    return 0;
}