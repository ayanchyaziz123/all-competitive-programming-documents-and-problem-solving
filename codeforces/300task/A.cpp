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
    int n, k;
    cin >> k >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << "YES" << endl;
            flag = true;
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
    }
    return 0;
}