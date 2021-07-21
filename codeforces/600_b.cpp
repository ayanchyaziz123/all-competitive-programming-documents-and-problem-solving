#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, m;
    cin >> n >> m;
    vector<ll> arr1;
    vector<ll> arr2;

    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        arr1.push_back(ple);
    }

    for (ll j = 0; j < m; j++)
    {
        ll ple;
        cin >> ple;
        arr2.push_back(ple);
    }
    sort(arr1.begin(), arr1.end());

    for (int i = 0; i < m; i++)
    {
        cout << upper_bound(arr1.begin(), arr1.end(), arr2[i]) - arr1.begin() << " ";
    }
    cout << endl;

    return 0;
}
