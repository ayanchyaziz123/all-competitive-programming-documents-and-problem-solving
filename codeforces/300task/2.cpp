#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp, pos;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pos[x] = i + 1;
            mp[x]++;
        }

        int Mi = INT_MAX;
        int ans = -1;

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
}