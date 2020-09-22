#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        vector<ll>v;
        for (ll i = 0; i < 3; i++)
        {
            ll ple;
            cin>>ple;
            v.push_back(ple);
        }

        sort(v.begin(), v.end());

        if (v[1] == v[2])
        {
            cout << "YES" << endl
                 << v[2] << " "
                 << v[0] << " " << v[0] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}