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
    ll n, t;
    cin >> n >> t;
    vector<ll> vc;
    set<ll>st;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        vc.push_back(ple);
    }
    sort(vc.begin(), vc.end());
    ll i = 0;
    ll cnt = 0;
    ll sum = 0;
    while (i < n)
    {
        sum += vc[i];
        if (sum > t)
        {
            break;
        }
        if (sum == t)
        {
            cnt++;
            break;
        }
        cnt++;
        i++;
    }
    cout << cnt << endl;
    return 0;
}