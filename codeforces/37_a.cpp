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
    int arr[n + 1];
    set<int> st;
    int mx = 0;
    int ans1 = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if (mx < arr[i])
        {
            mx = arr[i];
            ans1 = i + 1;
        }
    }

    int tf = 0;

    for (auto x : mp)
    {
        if (x.second > tf)
        {
            tf = x.second;
        }
    }

    cout << tf << " " << ans1 << endl;

    return 0;
}