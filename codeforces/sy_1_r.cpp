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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        priority_queue<ll> prq;
        for (ll i = 0; i < n; ++i)
        {
            ll ple;
            cin >> ple;
            prq.push(-ple);
        }
        ll cost = 0;
        while (prq.size() > 1)
        {
            ll p = prq.top();
            prq.pop();
            ll q = prq.top();
            prq.pop();
            ll ple = (-p) + (-q);
            cost += ple;
            prq.push(-ple);
        }
        cout << cost << endl;
    }

    return 0;
}