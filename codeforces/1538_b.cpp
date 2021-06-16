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
        int n;
        cin >> n;
        int arr[n + 1];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum % n != 0)
        {
            cout << -1 << endl;
            continue;
        }
        int x = sum / n;
        int res = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] > x)
            {
                res++;
            }
        }
        cout << res << endl;

    }

    return 0;
}