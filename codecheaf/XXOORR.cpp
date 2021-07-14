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
        ll n, k;
        cin >> n >> k;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> vc;
        ll i = 0;
        while (1)
        {
            vc.push_back(arr[i]);
            if (i + 1 < n)
            {
                vc.push_back(arr[i + 1]);
            }
            ll j = 0;
            while (1)
            {
                ll p = 0;
                if (vc[j] != 0)
                {
                    ll z = pow(2, p);
                    vc[j] = vc[j] ^ z;
                }
                if (vc[j + 1] != 0)
                {
                    ll z = pow(2, p);
                    vc[j + 1] = vc[j + 1] ^ z;
                }

                ll t = vc[j]


            }
        }
    }
    return 0;
}