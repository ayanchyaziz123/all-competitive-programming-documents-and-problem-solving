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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int ple;
        cin >> ple;
        mp[ple]++;
    }

    bool flag = false;

    for (auto x : mp)
    {
        if (x.second > 1)
        {
            cout << "No" << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "Yes" << endl;
    }

    return 0;
}