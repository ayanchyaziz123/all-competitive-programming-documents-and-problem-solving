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
    ll n;
    cin >> n;
    ll te = 0;
    ll to = 0;
    ll sum_even = 0;
    ll sum_odd = 0;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        if (ple % 2 == 0)
        {
            te++;
            sum_even += ple;
        }
        else
        {
            to++;
            sum_odd += ple;
        }
    }
    if (sum_even > sum_odd)
    {
        cout << te << endl;
    }
    else
    {
        if (sum_odd % 2 == 0)
        {
            cout << max(te, to) << endl;
        }
        else
        {
            cout << to << endl;
        }
    }
    return 0;
}