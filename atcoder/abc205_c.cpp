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
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = pow(a, c);
    ll y = pow(b, c);
    if (x < y)
    {
        cout << "<" << endl;
    }
    else if (x > y)
    {
        cout << ">" << endl;
    }
    else 
    {
        cout << "=" << endl;
    }

    return 0;
}