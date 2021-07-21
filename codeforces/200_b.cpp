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
    double sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll ple;
        cin >> ple;
        sum += ple;
    }
    cout << sum / n << endl;
    return 0;
}