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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> even;
        vector<ll> odd;

        for (ll i = 0; i < n; i++)
        {
            ll ple;
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
        for (ll i = 0; i < even.size(); i++)
        {
            cout << even[i] << " ";
        }
        for (ll i = 0; i < odd.size(); i++)
        {
            cout << odd[i] << " ";
        }

        cout << endl;
    }

    return 0;
}