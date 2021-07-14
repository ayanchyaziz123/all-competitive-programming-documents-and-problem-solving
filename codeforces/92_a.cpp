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
    ll n, m;
    cin >> n >> m;
    bool flag = false;
    while (flag != true)
    {
        for (ll i = 1; i <= n; i++)
        {
            int x = m - i;
            if (x < 0)
            {
                flag = true;
                break;
            }
            if (x == 0)
            {
                flag = true;
                m = 0;
                break;
            }
            m = m - i;
        }
    }
    cout << m << endl;

    return 0;
}