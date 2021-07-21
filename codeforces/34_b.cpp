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
    int n, m;
    cin >> n >> m;

    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
        {
            ans += abs(arr[i]);
            m--;
            if (m == 0)
            {
                break;
            }
        }
        }
    cout << ans << endl;
    return 0;
}