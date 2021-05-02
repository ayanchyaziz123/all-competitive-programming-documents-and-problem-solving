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
        ll n, k, d;
        cin >> n >> k >> d;
        vector<ll> arr;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            int ple;
            cin >> ple;
            sum += ple;
            arr.push_back(ple);
        }
        if (k * d <= sum)
        {
            cout << d << endl;
        }
        else if (k * d > sum && sum / k <= d)
        {
            cout << sum / k << endl;
        }
    }

    return 0;
}