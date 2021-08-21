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
        ll n, k;
        cin >> n >> k;
        ll arr[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        ll ans = -372036854775808;
   

        for (ll i = 1; i <= n; i++)
        {
            if (i != 1 && ((i * n) - (k * arr[i])) > ans)
            {
                for (ll j = i + 1; j <= n; j++)
                {
                    ll x = i * j - k * (arr[i] | arr[j]);
                    if (x > ans)
                    {
                        ans = x;
                    }
                }
            }
            if(i == 1)
            {
                for (ll j = i + 1; j <= n; j++)
                {
                    ll x = i * j - k * (arr[i] | arr[j]);
                    if (x > ans)
                    {
                        ans = x;
                    }
                }
            }
            else{
                continue;
            }
        }
        cout << ans << endl;
    }

    return 0;
}