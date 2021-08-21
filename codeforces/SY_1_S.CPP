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
        priority_queue<pair<ll, pair<string, ll>>> dq;
        ll n;
        cin >> n;
        if (n == 1)
        {
            ll price;
            string st;
            cin >> st >> price;
            dq.push({-price, {st, 0}});
        }
        if (n == 2)
        {
            ll price;
            string st;
            cin >> st >> price;
            dq.push({-price, {st, 1}});
        }
        if(n==3)
        {
            string st;
            cin >> st;
            while()

        }
    }
    return 0;
}