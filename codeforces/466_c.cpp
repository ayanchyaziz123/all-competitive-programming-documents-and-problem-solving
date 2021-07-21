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
    ll n;
    cin >> n;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        arr.push_back(ple);
    }
    ll cnt = 0;
    ll rn = 2;
    for(ll i = 1; i < rn; i++)
    {
        for(ll j = rn ; j <= rn; j++)
        {
            for(ll k = j + 1 + 1; k < n; k++)
            {
                if(arr[i] == arr[j] && arr[i] == arr[k])
                {
                    cnt++;

                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}