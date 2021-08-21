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

    ll n;
    cin >> n;
    ll cnt = 0;
    while (n)
    {
        if (n & 1)
        {
            cnt++;
        }
        n = n >> 1;
    }
    cout << cnt << endl;

    return 0;
}