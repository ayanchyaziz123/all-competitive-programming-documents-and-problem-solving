#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        unordered_map<int, int> mp, pos;

        int ans = -1;
        int Mi = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pos[x] = i + 1;
            mp[x]++;
        }
        for (auto it : mp)
        {
            if (it.second == 1 && Mi > it.first)
            {
                Mi = it.first;
                ans = pos[it.first];
            }
        }
        cout << ans << endl;
    }

    return 0;
}