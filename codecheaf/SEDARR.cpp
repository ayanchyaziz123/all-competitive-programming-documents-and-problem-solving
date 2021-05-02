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
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            sum += ple;
            arr.push_back(ple);
        }
        if(sum % k == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        
    }

    return 0;
}