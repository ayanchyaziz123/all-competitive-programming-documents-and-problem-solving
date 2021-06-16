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
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        mp[st]++;
    }

    ll mx = 0;
    string ans;
    for (auto x : mp)
    {
        if (x.second >= mx)
        {
            mx = x.second;
            ans = x.first;
        }
    }
    cout << ans << endl;

    return 0;
}