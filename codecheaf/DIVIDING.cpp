#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum = sum + x;
    }
    ll r = n * (n + 1) / 2;
    if (r == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}