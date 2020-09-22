#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    freopen("input.txt", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll s, ans;
        s = y * k + k - 1;
        x--;
        if (s % x == 0)
            ans = s / x;
        else
            ans = s / x + 1;
        cout << ans + k << endl;
    }

    return 0;
}