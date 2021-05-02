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
        ll n, m;
        cin >> n >> m;
        ll arr1[n + 1], arr2[m + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        while (1)
        {
            ll initial_sum = 0, initial_sum2 = 0;
            ll a = accumulate(arr1, arr1+n, initial_sum);
            ll b = accumulate(arr2, arr2+m, initial_sum2);
        }
    }
    return 0;
}