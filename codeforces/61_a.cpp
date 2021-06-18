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
    string a;
    string b;
    cin >> a;
    cin >> b;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] == '0' && b[i] == '0')
        {
            cout << 0;
        }
        if (a[i] == '0' && b[i] == '1')
        {
            cout << 1;
        }
        if (a[i] == '1' && b[i] == '0')
        {
            cout << 1;
        }
        if (a[i] == '1' && b[i] == '1')
        {
            cout << 0;
        }
    }
    cout << endl;
    return 0;
}