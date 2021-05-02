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
    ll n;
    cin >> n;
    vector<ll> a;
    unordered_map<ll, ll> freq;
    for (ll i = 0; i < n; i++)
    {
        int ple;
        cin >> ple;
        freq[ple]++;
    }

    for (auto it : freq)
    {
        cout << it.first << "-->" << it.second << endl;
    }

    return 0;
}