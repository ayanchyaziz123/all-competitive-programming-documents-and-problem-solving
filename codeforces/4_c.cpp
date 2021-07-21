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
        string ple;
        cin >> ple;
        if (mp[ple] == 0)
        {
            mp[ple] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << ple << mp[ple] << endl;
            mp[ple]++;
        }
    }

    return 0;
}