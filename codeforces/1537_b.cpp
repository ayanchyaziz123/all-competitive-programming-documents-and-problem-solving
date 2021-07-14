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
        ll col, row, k, l;
        cin >> col >> row >> k >> l;
        cout << col << " " << 1 << " " << 1 << " " << row << endl; 
    }

    return 0;
}