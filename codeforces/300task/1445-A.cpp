#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        vector<ll> a;
        vector<ll> b;
        cin >> n >> x;

        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            a.push_back(ple);
        }
        for (ll i = 0; i < n; i++)
        {
            ll ple;
            cin >> ple;
            b.push_back(ple);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end()), greater<ll>();
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] + b[i] > x)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}