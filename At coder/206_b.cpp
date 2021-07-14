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
    ll day = 1;
    ll night = 1;
    while (night < n)
    {
        day++;
        night += day;
    }
    cout << day << endl;
    return 0;
}