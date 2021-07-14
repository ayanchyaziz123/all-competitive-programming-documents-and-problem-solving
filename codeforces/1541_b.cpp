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
        ll cnt = 0;
        vector<ll> vc;
        for (ll i = 0; i < n; i++)
        {
            if (n + (n - 1) >= arr[i])
            {
                vc.push_back(arr[i]);
            }
        }
        cout << vc.size() << " hello " << endl;
        for (ll j = 0; j < vc.size(); j++)
        {
            for (ll k = j + 1; k < vc.size(); k++)
            {
                if ((vc[j] * vc[k]) == (j+1)+(k+1))
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}