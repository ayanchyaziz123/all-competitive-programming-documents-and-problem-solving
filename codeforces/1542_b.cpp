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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (a == n || b == n)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a == 1 || b == 1)
        {
            cout << "NO" << endl;
        }
        ll x = a;
        ll y = b;
        bool flag = false;
        while (true)
        {
            ll mn = min(x, y);
            x = mn * a;
            y = mn + b;
            if (x == n || y == n)
            {
                cout << "YES" << endl;
                break;
            }
            if (x > n || y > n)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}