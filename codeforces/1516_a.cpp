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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll j = 0;
        for (int i = 0; i < k; i++)
        {
            while (j < n - 1 && a[j] == 0)
            {
                j++;
            }
            if (j >= n - 1)
                break;
            a[n - 1]++;
            a[j]--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}