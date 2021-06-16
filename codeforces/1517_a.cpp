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
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        if (n % 2050 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        n /= 2050;
        int ans = 0;
        while (n != 0)
        {
            ans += (n % 10);
            n /= 10;
        }
        cout << ans << endl;
    }

    return 0;
}