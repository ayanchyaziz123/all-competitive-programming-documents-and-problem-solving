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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll a1 = a / 2;
        ll s1 = a - a1;
        ll b1 = b / 2;
        ll s2 = b - b1;
        ll ans = (a1 * b1) + (s1 * s2);
        cout << ans << endl;
    }

    return 0;
}