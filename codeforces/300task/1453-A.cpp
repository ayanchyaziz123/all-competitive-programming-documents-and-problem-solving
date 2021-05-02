#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;

const int MAX_N = 100;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j;
        cin >> n >> m;
        int a[MAX_N + 5], b[MAX_N + 5];
        int ans = 0;

        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < m; i++)
            cin >> b[i];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                if (a[i] == b[j])
                    ans++;

        cout << ans << '\n';
    }

    return 0;
}