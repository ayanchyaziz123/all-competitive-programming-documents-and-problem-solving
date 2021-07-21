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
    string s;
    cin >> n;
    cin >> s;
    ll ans;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans = i;
            break;
        }
    }
    if (ans % 2 == 0)
    {
        cout << "Takahashi" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }
    return 0;
}