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
        vector<ll> arr;
        vector<ll> arr2;
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            arr.push_back(ple);
        }

        ll n1 = 0;
        ll n2 = n - 1;
        ll a = (n + 1) / 2;
        ll b = a;

        while (n1 < a || n2 > b)
        {
            arr2.push_back(arr[n1]);
            arr2.push_back(arr[n2]);
            n1++;
            n2--;
        }
        for (ll i = 0; i < n; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}