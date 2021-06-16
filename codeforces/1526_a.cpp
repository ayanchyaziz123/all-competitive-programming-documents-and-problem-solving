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
        vector<int> even, odd;
        for (int i = 0; i < n; i++)
        {
            int ple;
            cin >> ple;
            if (ple % 2 == 0)
            {
                even.push_back(ple);
            }
            else
            {
                odd.push_back(ple);
            }
        }
        vector<ll> brr;

        for (auto i : even)
        {
            brr.push_back(i);
        }
        for (auto i : odd)
        {
            brr.push_back(i);
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(brr[i], 2 * brr[j]) > 1)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}