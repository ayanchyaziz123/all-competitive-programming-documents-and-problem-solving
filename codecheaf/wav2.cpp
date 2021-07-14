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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    string ans;
    int x;

    while (q--)
    {
        cin >> x;
        ll pos = lower_bound(a.begin(), a.end(), x) - a.begin();
        if (a[pos] == x)
        {
            ans = "0";
        }
        else if (pos % 2 == 0)
        {
            ans = "POSITIVE";
        }
        else
        {

            ans = "NEGATIVE";
        }
        cout << ans << endl;
    }

    return 0;
}