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
    string st;
    cin >> st;
    map<char, ll> mp;
    for (ll i = 0; i < st.size(); i++)
    {
        mp[st[i]]++;
    }
    ll odd = 0;
    for (auto x : mp)
    {
        if (x.second % 2 != 0)
        {
            odd++;
        }
    }
    if(odd == 0)
    {
        cout << "First" << endl;
    }
    else if (odd % 2 == 0)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
    }
    return 0;
}