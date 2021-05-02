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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int ple;
            cin >> ple;
            v.push_back(ple);
        }
        int f = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            f = f + v[i];
            ans = ans + v[i];
            if (f == 0)
            {
                break;
            }
            f--;
        }
        cout << ans;
    }

    return 0;
}