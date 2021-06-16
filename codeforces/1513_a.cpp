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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n + 1);
        int num = n;
        for (int i = 2; i < n; i = i +2)
        {
            if (k == 0) break;
            arr[i] = num--;
            k--;
        }
        if (k)
        {
            cout << -1 << endl;
            continue;
        }
        int cr = 1;
        for (int i = 1; i <= n; i++)
        {
            if (!arr[i])
            {
                arr[i] = cr++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}