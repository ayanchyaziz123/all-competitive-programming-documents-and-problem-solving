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
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = n - a;
    if (ans - b >= 2)
    {
        cout << b + 1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}