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
    int n;
    cin >> n;
    int arr[n + 10];

    int mn = 2147483647;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    arr[n+1] = arr[1];
    int ans1;
    int ans2;
    int i = 1;
    while (i <= n)
    {
        int m = abs(arr[i] - arr[i + 1]);
        if (mn > m)
        {
            mn = m;
            ans1 = i;
            ans2 = i + 1;
        }
        i++;
    }

    if (ans2 >= n + 1)
    {
        cout << ans1 << " " << 1 << endl;
    }
    else
    {
        cout << ans1 << " " << ans2;
    }

    return 0;
}