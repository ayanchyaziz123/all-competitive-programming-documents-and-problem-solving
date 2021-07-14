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
        ll n;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll x = 0;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if(1 <= arr[i] && arr[i] <= 7)
            {
                ans++;
            }
            if(ans == 7)
            {
                x = i;
                break;
            }
        }
        cout << x + 1 << endl;
        ;
    }

    return 0;
}