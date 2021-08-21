#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln
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
        ll m;
        cin >> m;
        ll arr[m + 1];
        ll brr[m + 1];
        for (ll i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> brr[i];
        }

        ll pre1[m + 4], pre2[m + 4];
        pre1[0] = arr[0];
        for (ll i = 1; i < m; i++)
        {
            pre1[i] = pre1[i - 1] + arr[i];
        }
        pre2[0] = brr[0];
        for (ll i = 1; i < m; i++)
        {
            pre2[i] = pre2[i - 1] + brr[i];
        }
        pre1[m] = pre1[m - 1];
        ll ans = pre1[m - 1] - pre1[0];

        for (ll i = 1; i < m; i++)
        {
            ll a = pre2[i - 1];
            ll b = pre1[m - 1] - pre1[i];
            ans = min(ans, max(a, b));
        }
        cout << ans << endl;
    }

    return 0;
}